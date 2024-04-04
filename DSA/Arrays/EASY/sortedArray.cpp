#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int n ){
    for(int i = 1 ;i<n ; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
       
    }
     return true;
}
int main(){
      int arr[5] = {23,34,35,56,57}  ;
       bool result = isSorted(arr,5);
       if(result){
        cout<< "Array is Sorted" << endl;
       }else{
        cout << " Sorry Try Again " <<endl;
       }

     return 0;
}

// TC -> O(N) and SC-> O(1)