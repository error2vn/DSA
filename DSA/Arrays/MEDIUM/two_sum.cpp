// Two Sum : Check if a pair with given sum exists in Array

#include<bits/stdc++.h>
using namespace std;

string twosum(int n , vector<int> &arr, int target){
    sort(arr.begin(),arr.end());
    int left = 0 , right = n-1;
     while(left<right){
        int sum = arr[left] + arr[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
     }
     return "NO";
}
int main(){
   int n = 5 ;
   vector<int> arr = {2,6,5,8,11};
   int target = 8;
   string ans = twosum(n,arr,target);
   cout << "print " << ans << endl;
   return 0;
}

// TC-> O(N) + O(NlogN) and SC-> O(1)