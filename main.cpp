#include <cassert>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
 public:
  int subsetXORSum(vector<int>& nums) {
    vector<int> xor_totals;
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
      const int& x = nums[i];
      const int n = xor_totals.size();
      xor_totals.resize(2 * n + 1);
      for (int j = 0; j < n; ++j) {
        const int t = xor_totals[j] ^ x;
        xor_totals[n + j] = t;
      }
      xor_totals.back() = x;
      sum += accumulate(xor_totals.begin() + n, xor_totals.end(), 0);
    }

    return sum;
  }
};

void TestSubsetXorSum() {
  Solution s;
  {
//    vector<int> nums{1,3};
//    assert(6 == s.subsetXORSum(nums));
  }
  {
    vector<int> nums{5,1,6};
    assert(28 == s.subsetXORSum(nums));
  }
  {
    vector<int> nums{3,4,5,6,7,8};
    assert(480 == s.subsetXORSum(nums));
  }
}

int main() {
  TestSubsetXorSum();
  std::cout << "Ok!" << std::endl;
  return 0;
}
