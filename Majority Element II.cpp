/*
      Day 05 
      
      #  Majority Element II  #

      c++

      20/11/2024

*/


vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        sort(arr.begin(), arr.end());
    int n = arr.size();
    long long int co = 1;
    vector<int> ans;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            co++;
        } else {
            if (co > n / 3) {
                ans.push_back(arr[i - 1]);
            }
            co = 1;
        }
    }
    
    // Check the last element
    if (co > n / 3) {
        ans.push_back(arr[n - 1]);
    }
    
    return ans;
    }
