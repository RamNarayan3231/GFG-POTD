/*
      Day 03 
      
      #  Rotate Array  #

      c++

*/

void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();

        d %= n;

        reverse(arr.begin(), arr.begin() + d);

        reverse(arr.begin() + d, arr.end());
 
        reverse(arr.begin(), arr.end());
  }
