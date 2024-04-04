// Left Rotate an array by one palce 

#include<bits/stdc++.h>
using namespace std;
void left_rotate(int arr[], int n){
    int temp  = arr[0];
    for(int i = 0 ; i<n -1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i = 0 ; i<n ;i++){
        cout << arr[i] << " ";
    }
}
int main(){
   int arr[6] = {1,2,3,4,5,6};
   left_rotate(arr,6);
}

// TC -> O(n) and SC = O(1)