#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algorithm
        int cnt = 0;
        int el,n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int count1 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) count1++;
        }
        if(count1 > n/2) return el;
        else return -1;
    }
};