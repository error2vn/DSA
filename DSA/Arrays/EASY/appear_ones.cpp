// Find the number that appears once, and the other numbers twice
// Dry Run is:
// Assume the given array is: [4,1,2,1,2]
// XOR of all elements = 4^1^2^1^2
//       = 4 ^ (1^1) ^ (2^2)
//       = 4 ^ 0 ^ 0 = 4^0 = 4
// Hence, 4 is the single element in the array.

#include<bits/stdc++.h>
using namespace std;

int getsingleElement(vector<int> &arr){
    int n = arr.size();

    int Xorr = 0 ;
    for(int i =0; i<n ;i++){
        Xorr = Xorr ^ arr[i];
    }
    return Xorr;
}
int main(){
   vector<int> arr = {4, 2, 3, 4, 2};
   int ans = getsingleElement(arr);
   cout << " the single element is : "<< ans << endl;
   return 0;
}