class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // init ans to -1 here in case there is no such element
        int ans = -1, mx = 0;
        // use hash map to store the frequency of each element
        map<int, int> m;
        for (auto &x : nums) m[x]++;
        // iterate each element in the hash map
        for (auto &x : m) {
            // x.first is the element
            // x.second is the frequency of that element
            // if the element is even -> x.first % 2 == 0 
            // and if the count is greater than the current maximum -> x.second > mx
            if (x.first % 2 == 0 && x.second > mx) {
                // then we can update the maximum
                mx = x.second;
                // and this element can be the answer
                ans = x.first;
            }
        }
        return ans;
    }
};
