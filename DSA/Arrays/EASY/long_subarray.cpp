// longest Subarray with sum K | [Postives and Negatives]

#include<bits/stdc++.h>
using namespace std;

int getlongestsubarray(vector<int> &a, int k){
    int n = a.size();

    map<int,int> presumMap;
    int sum = 0 ;
    int maxlen = 0 ;
    for(int i = 0 ; i<n ; i++){
        // calculate the prefix sum till index i;
        sum +=a[i];

        // if the sum = k ;update the maxlen

        if(sum==k){
            maxlen = max(maxlen, i+1);
        }
        // calculate the sum of remaining part
        int rem = sum-k;

        // calculate the length and update maxlen
        if(presumMap.find(rem) != presumMap.end()){
            int len = i-presumMap[rem];
            maxlen = max(maxlen,len);
        }

        // finally update the map checking the conditions
        if(presumMap.find(sum)==presumMap.end()){
            presumMap[sum] = i;
        }


    }

    return maxlen;
}
int main(){
      vector<int> a = {-1,1,1};
      int k =1;
      int len = getlongestsubarray(a,k);
      cout << " the length of longest subarray is: " << len << endl;
      return 0;
}

// SC-> O(N)
// Time Complexity: O(N) or O(N*logN) depending on which map data structure we are using, where N = size of the array.