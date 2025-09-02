#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,1,1,1,4,2,3};
    int n = arr.size();
    int k=3;
    int sum =0, maxlen=0;
    map<int ,int> preSumMap;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum == k) maxlen = max(maxlen,i+1);
        int rem = sum - k;
        // condition to check if rem is present in our map
        // if present then out iterator will not reach presummap.end()
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen,len);
        }
        // condition to handle duplicates(when 0 and -ve numbers are present)
        if(preSumMap.find(sum) == preSumMap.end()){
        preSumMap[sum]=i;
        }
    }
    cout<<maxlen;
    return 0;
}