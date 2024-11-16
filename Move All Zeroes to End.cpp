/*        Move All Zeroes to End          */

// POTD Day 01


// C++


class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int lastNonZeroIndex = 0;

        
        for (int i = 0; i < arr.size(); i++) {
        
            if (arr[i] != 0) {
                swap(arr[i], arr[lastNonZeroIndex]);
                lastNonZeroIndex++;
            }
        }
    }
};
