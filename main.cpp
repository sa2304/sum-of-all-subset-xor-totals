#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int subsetXORSum(vector<int>& nums) {
    // FIXME
    return 0;
  }
};

void TestSubsetXorSum() {
  Solution s;
  {
    vector<int> nums{1,3};
    assert(6 == s.subsetXORSum(nums));
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
