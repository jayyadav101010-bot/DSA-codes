class Solution {
public:
    
    long long fun(vector<int>& piles, int speed){
        long long totalhrs = 0; 
        int n = piles.size();
        for(int i=0;i<n;i++){
            totalhrs += (piles[i]+speed-1)/speed;
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1, high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low <= high){
            int mid = (low + high)/2;
            long long totalhrs = fun(piles,mid);
            if(totalhrs <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};