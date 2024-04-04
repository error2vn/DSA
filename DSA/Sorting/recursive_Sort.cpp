#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n ){
    // base case: range == 1
    if(n == 1) return ;

    for(int j = 0 ; j<= n-2 ; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    
    // range reduced afetr recursion
    bubble_sort(arr, n-1);
}
int main(){
    int arr[] = {13,46,24,52,20,9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout << " before using bubble sort" << endl;
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
     cout << endl;
 
    bubble_sort(arr, n);
    cout << " after using bubble sort" << endl;
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;


    
}