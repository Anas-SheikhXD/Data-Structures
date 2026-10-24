#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target ){
    for( int i = 0; i < n; i++){
        if(arr[i] == target)
        return i;
    }
    return -1;
}
int main() {
    
    int arr[] = {34 , 8 , 59 , 21 , 77, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 21;
    
    int result = linearSearch(arr, n, target);

    if(result != -1 )
        cout<< "Element found at index: " << result <<endl; 
    else
        cout<< "Element not found";
    return 0;
}