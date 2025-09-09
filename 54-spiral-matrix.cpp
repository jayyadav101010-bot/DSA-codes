class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int minr = 0, maxr = n-1;
        int minc = 0, maxc = m-1;
        vector<int> ans;
        int total=0,tne = m*n;
        while(total != tne){
            for(int i=minc;i<=maxc;i++){
                ans.push_back(matrix[minr][i]);
                total++;
            }
            minr++;
            if(total == tne) break;
            for(int i=minr;i<=maxr;i++){
                ans.push_back(matrix[i][maxc]);
                total++;
            }
            maxc--;
            if(total == tne) break;
            for(int i=maxc;i>=minc;i--){
                ans.push_back(matrix[maxr][i]);
                total++;
            }
            maxr--;
            if(total == tne) break;
            for(int i=maxr;i>=minr;i--){
                ans.push_back(matrix[i][minc]);
                total++;
            }
            minc++;
            if(total == tne) break;
        }
        return ans;
    }
};