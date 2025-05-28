#include<iostream>
#include<vector>
using namespace std;

int findLargestElement(const vector<int>&arr){
    int largest = arr[0];
    for(int num : arr){
        if(num > largest){
            largest = num;
        }
    }
}
int main() {
    vector<int> arr = {1, 8, 7, 56, 90};
    cout << "Largest element: " << findLargestElement(arr) << endl;
    return 0;
}
