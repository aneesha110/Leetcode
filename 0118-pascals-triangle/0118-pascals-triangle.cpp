class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0;i<numRows;i++){
            vector<int> rows;
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){rows.push_back(1);}
                else{
                    rows.push_back(triangle[i-1][j-1]+triangle[i-1][j]);
                }
            }
            triangle.push_back(rows);
        }
        return triangle;
    }
};