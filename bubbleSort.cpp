#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(std::vector<int>& v) {
    int comparisons = 0; // Biến đếm số lần so sánh
    int swaps = 0; // Biến đếm số lần gán

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            comparisons++; // Tăng biến đếm so sánh
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swaps++; // Tăng biến đếm gán
            }
        }
    }

    std::cout << "So lan so sanh: " << comparisons << std::endl;
    std::cout << "So lan gan: " << swaps << std::endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);
    cout<<"________\n";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}