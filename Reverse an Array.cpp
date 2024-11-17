/*
      Day 02 
      
      #  Reverse an Array  #

      c++

*/

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);  // Swap elements
    }
}
