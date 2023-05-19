class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>pas;
        for(int i=0;i<n;i++){
            vector<int>pasRow(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    pasRow[j]=1;
                else
                    pasRow[j]=pas[i-1][j-1]+pas[i-1][j];
            }
            pas.push_back(pasRow);
        }
        return pas;
    }
};