#include<bits/stdc++.h>
using namespace std ;
void insertion_sort(int arr[] ,int n ){
     for(int i = 0 ; i,n ; i++){
        int j =1 ;
        while(j>0  && arr[j-1]>arr[j] ){
            swap(arr[j] , arr[j-1]);
        }
     }

     cout << "After using insertion sort: " << endl;
     for(int i = 0; i< n ; i++) {
        cout << arr[i] << " ";
     }
     cout << endl;
}
int main(){
      int arr[] = {13,46,24,52,20,6};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout << " before using insertion sort" << endl;
      for(int i = 0 ;i<n; i++){
        cout << arr[i] << " ";
      } 
      cout << endl;
      insertion_sort(arr,n);
      return 0 ; 
}