#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    unordered_map<int,int> mpp;
    int sum = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum==0) maxi = i+1;
        else{
            if(mpp.find(sum) != mpp.end()){//check if sum is present in map
                maxi = max(maxi, i-mpp[sum]);//to find length
            }
            else mpp[sum] = i; //update new sum with its index
        }
    }
    cout<<"the longset subarray with zero sum is : "<<maxi;
    return 0;
}