class Solution {
public:
    int numWaterBottles(int num, int numEx) {
      return num+(num-1)/(numEx-1);
    }
};