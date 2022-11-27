#include "twj.h"
//把小于k得放在左侧，大于k得放在右侧，返回大于等于k得索引
int PartitionArray(std::vector<int> &nums, int k) {
  int left = 0, right = nums.size() - 1;

  while (left <= right) {
    while (left <= right && nums[left] < k) {
      ++left;
    }
    while (left <= right && nums[right] >= k) {
      --right;
    }

    if (left <= right) {
      int temp = nums[left];
      nums[left] = nums[right];
      nums[right] = temp;
      ++left;
      --right;
    }
  }
  return left;
}