class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>freq;
        for (int num:nums) {
            if (freq.count(num)) {
                return num;
            }
            freq.insert(num);
        }
        return -1;
    }
};