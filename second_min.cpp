#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> nums={6,5,4,2,31,9,1,0};
 int n=nums.size();
 int first_min=nums[0],second_min=INT_MAX;
 for(int i=1;i<n;i++){
     if(nums[i]<first_min){
         second_min=first_min;
         first_min=nums[i];
         
     }else{
         if(nums[i]<second_min){
             second_min=nums[i];
         }
     }
 }
 cout<<first_min<<" "<<second_min;
    return 0;
}