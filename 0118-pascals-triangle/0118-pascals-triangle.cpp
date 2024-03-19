#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int>generateRow(int row){
        vector<int>ansRow;
        long long ans=1;
        ansRow.push_back(1);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/(i);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};


