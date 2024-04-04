#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0 ; i<n ;i++){
        int minimum = i;
        for(int j = i+1; j<n ; j++){
            if(arr[j] < arr[minimum]){
                // minimum = j ;
                swap(arr[j], arr[minimum]);
            }
        }

        // int temp = arr[minimum];
        // arr[minimum] = arr[i];
        // arr[i] = temp;
    }
    cout << "After selection sort: " << endl;
    for(int i =0 ;i<n ; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}
int main(){
      int arr[] = {13,46,24,52,20,9};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout << "before selection sort " << endl;
      for(int i = 0 ; i<n ;i++){
        cout << arr[i] << " ";
      }
      cout << endl;
      selection_sort(arr,n);
      return 0 ;
}


// time complexity = O(N^2)
// Space Complexiety = O(1)