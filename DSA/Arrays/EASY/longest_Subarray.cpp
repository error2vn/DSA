// Longest Subarray with given Sum K(Positives)
#include<bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int>& a, long long k){
    int n = a.size();
    int left = 0 , right = 0 ; //2 pointers
    long long sum = a[0];
    int maxlen = 0;
    while(right < n){
        //if sum>k , reduce the subarrays from left
        // until sum becomes less or equal to k;

        while(left<=right && sum>k){
            sum -= a[left];
            left++;
        }
        // if sum = k , update the maxlen 
        if(sum==k){
            maxlen = max(maxlen , right-left+1);
        }
        right++;
        if(right<n) sum+= a[right];
    }
    return maxlen;
}
int main(){
   vector<int> a = {2,1,1,1,5,1,9};
   long long k = 10;
   int len = getlongestsubarray(a,k);
   cout << " the length of the longest subarray is: " << len << endl;
   return 0;
}