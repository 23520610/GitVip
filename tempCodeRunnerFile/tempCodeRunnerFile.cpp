#include<iostream>
#include<vector>
using namespace std;
#include<fstream>
void bubbleSort(vector<int>& v);
void insertionSort(vector<int>& v);
void interchangeSort(vector<int>& v);
void selectionSort(vector<int>& v);

int main(){
    int n;
    cout<<"So phan tu cua mang: ";
    cin >> n;
    vector<int> arr; // Khởi tạo vector rỗng
    ifstream inFile("D:\\DSA\\data4.txt");
    int number;
    int i = 0; 
    while (inFile >> number && i < n) {
        arr.push_back(number); // Thêm phần tử vào vector
        i++;
    }
    inFile.close(); // Đóng file
    vector<int> arr1,arr2,arr3;
    arr1=arr2=arr3=arr;
    bubbleSort(arr);
    insertionSort(arr1);
    interchangeSort(arr2);
    selectionSort(arr3);

    string filename = "D:\\DSA\\sorted_array.txt";
    ofstream outfile(filename, ios::trunc);
    for (int num : arr) {
            outfile << num << " ";
        }
    outfile.close();
    cout << "Mang da duoc sap xep duoc luu vao file " << filename <<endl;
    return 0;

}

void bubbleSort(vector<int>& v) {
    int sosanh = 0; 
    int gan = 0; 
    for (int i = 0; i < v.size(); i++) {
        sosanh++; 
        gan++;
        for (int j = 0; j < v.size() - 1; j++) {
            sosanh++; 
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                gan+=3; 
            }
            sosanh++; 
            gan++;
        }
    }
    cout<<"\nbubbleSort\n";
    cout << "So lan so sanh: " << sosanh << endl;
    cout << "So lan gan: " << gan << endl;
}

void insertionSort(vector<int>& v) {
    int sosanh = 0; 
    int gan = 0; 
    for (int i = 1; i < v.size(); i++) {
        int j = i;
        gan++;
        while (j > 0 && v[j] < v[j-1]) {
            swap(v[j], v[j-1]);
            j--;
            gan+=4;
            sosanh+=2;
        }
        gan++;
        sosanh++;

    }
    cout<<"\ninsertionSort\n";
    cout << "So lan so sanh: " << sosanh << endl;
    cout << "So lan gan: " << gan << endl;
}

void interchangeSort(vector<int>& v) {
    int sosanh=0,gan=0;
    for (int i = 0; i < v.size() - 1; i++) {
        sosanh++;
        gan++;
        for (int j = i + 1; j < v.size(); j++) {
            sosanh++;
            if (v[i] > v[j]){
                swap(v[i], v[j]);
                gan+=3;
            }
            gan++;
            sosanh++;
        }
    }
    cout<<"\ninterchangeSort\n";
    cout << "So lan so sanh: " << sosanh << endl;
    cout << "So lan gan: " << gan << endl;
}
void selectionSort(vector<int>& v) {
    int sosanh = 0, gan = 0;
    int min, i, j;
    for (i = 0; i < v.size() - 1; i++) {
        min = i;
        gan += 2;
        sosanh++;
        for (j = i + 1; j < v.size(); j++) {
            sosanh += 2;
            gan++;
            if (v[j] < v[min]) {
                min = j;
                gan++;
            }
        }
        gan += 3;
        if (min != i) {
            swap(v[i], v[min]);
            gan += 3;
        }
    }
    cout << "\nselectionSort\n";
    cout << "So lan so sanh: " << sosanh << endl;
    cout << "So lan gan: " << gan << endl;
}
