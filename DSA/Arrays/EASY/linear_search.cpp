#include<bits/stdc++.h>
using namespace std;

int search(int arr[] ,int n , int key){
    for(int i = 0 ;i<n ;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int key = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = search(arr,n,key);
    cout << " index of key is  " << val << endl;
}