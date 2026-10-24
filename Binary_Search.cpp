#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int target){
    int left = 0 , right = n-1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;   
    }
    return -1;
}
int main() {
          int arr[] = {5 , 14 , 27 , 38 , 52 , 69 , 81};
          int n = sizeof(arr) / sizeof(arr[0]);
          int target = 81;
          int result = binarySearch(arr , n , target);

          if(result != -1 ) cout<< "Element found at index: "<< result;
          else cout<< "Element not found!";
    return 0;
}