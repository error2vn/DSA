// find the missing numbe in the arrays 

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N){
    int sum = (N*(N+1)/2);

    int sum2 = 0;
    for(int i = 0 ;i<N-1 ;i++){
        sum2 +=a[i];
    }

    int missingnum = sum - sum2;
    return missingnum;
}
int main(){
   int N = 5;
   vector<int> a = {1,2,4,5};
   int ans = missingNumber(a,N);
   cout << " the missing number is: " << ans << endl;
   return 0;
}

// TC-> O(N) and SC-> O(1)
