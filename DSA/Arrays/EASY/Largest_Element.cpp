/*
Brute force approach

#include<bits/stdc++.h>
using namespace std;

int sortArray(vector<int> &arr  ){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int> arr1 = {1,23,56,34,78,11,1111,34};
    cout << "largest element of the array: " << sortArray(arr1) ;
}

Tc -> O(nlogn) and SC -> O(n)

*/

#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[] ,int n){
    int max = arr[0];
    for(int i = 0 ;i<n ;i++){
        if(arr[i]>max){
         max = arr[i];
        }
    }
    return max;
}
int main(){
   int arr1[8] = {1,23,56,34,78,11,1111,34};
   int result = largestElement(arr1,8);
   cout << " Largest element of the arrays is:- " << result << endl;
   return 0;

}

// TC-> O(n) and SC-> O(1)
