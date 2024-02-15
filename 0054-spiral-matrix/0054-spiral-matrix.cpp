#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        if (matrix.empty() || matrix[0].empty()) {
            return result;
        }

        int row_start = 0, row_end = matrix.size() - 1;
        int column_start = 0, column_end = matrix[0].size() - 1;

        while (row_start <= row_end && column_start <= column_end) {
            // Traverse top row
            for (int col = column_start; col <= column_end; col++) {
                result.push_back(matrix[row_start][col]);
            }
            row_start++;

            // Traverse right column
            for (int row = row_start; row <= row_end; row++) {
                result.push_back(matrix[row][column_end]);
            }
            column_end--;

            // Traverse bottom row
            if (row_start <= row_end) {
                for (int col = column_end; col >= column_start; col--) {
                    result.push_back(matrix[row_end][col]);
                }
                row_end--;
            }

            // Traverse left column
            if (column_start <= column_end) {
                for (int row = row_end; row >= row_start; row--) {
                    result.push_back(matrix[row][column_start]);
                }
                column_start++;
            }
        }

        return result;
    }
};
