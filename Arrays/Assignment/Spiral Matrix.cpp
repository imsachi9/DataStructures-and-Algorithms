//leetcode-54: Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;
        vector<int>ans;

        int startRow = 0;
        int endCol = n-1;
        int endRow = m-1;
        int startCol = 0;

        int count=0;
        while(count < total_elements){
            //Print StartingRow
            for(int i=startCol; i<=endCol && count < total_elements; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            //Print Ending Col
            for(int i=startRow; i<=endRow && count < total_elements; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            //Print Ending Row
            for(int i=endCol; i>=startCol && count < total_elements; i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            //Print Starting Col
            for(int i=endRow; i>=startRow && count < total_elements; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};