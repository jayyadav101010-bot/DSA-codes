#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,1,1,1,4,2,3};
    int n = arr.size();
    int k=8;
    int sum =arr[0], maxlen=0;
    int left = 0, right = 0;
    while(left < n && right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k) maxlen = max(maxlen,right-left+1);
        right++;
        if(right < n){
            sum += arr[right];
        }
    }
    cout<<maxlen;
    return 0;
}