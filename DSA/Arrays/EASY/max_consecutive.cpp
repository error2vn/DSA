// count maximum consecutive one's in the array

#include<bits/stdc++.h>
using namespace std ;

int findMaxConsecutive(vector<int> & nums){
    int count = 0 ;
    int max_counts = 0 ;
    for(int i = 0 ; i< nums.size() ; i++){
        if(nums[i] == 1){
            count++;
        }else{
            count = 0 ;
        }
        max_counts = max(max_counts,count);
    }
    return max_counts;
}
int main(){
   vector<int> nums = {1,1,0,1,1,1,0,0,1,1,1,1,1,1};
   int ans = findMaxConsecutive(nums);
   cout << " the maximum consecutive 1's are: "<< ans ;
   return 0; 
}