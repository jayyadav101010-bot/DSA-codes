#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter size of first array : ";
    cin>>a;
    int arr1[a];
    cout<<"Enter elements of first array : ";
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    cout<<"Enter size of second array : ";
    cin>>b;
    int arr2[b];
    cout<<"Enter elements of second array : ";
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    vector<int> unionarr;
    int i=0,j=0;
    while(i<a && j<b){
        if(arr1[i] <= arr2[j]){
            if(unionarr.size() == 0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size() == 0 || unionarr.back() != arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++; 
        }
    }
    while(i<a){
        if(unionarr.back()!=arr1[i]){
            unionarr.push_back(arr1[i]);
            i++;
        }
    }
    while(j<b){
        if(unionarr.back()!=arr2[j]){
            unionarr.push_back(arr2[j]);
            j++;
        }
    }
    cout<<"The union of given two sorted array is : "<<endl;
    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
    }

}

