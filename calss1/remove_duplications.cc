#include "twj.h"
//移除重复的字符 返回移除后数组长度
int RemoveDuplicates(std::vector<int> &nums) {
  if (nums.empty()) {
    return 0;
  }

  int size = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != nums[size]) {
      nums[++size] = nums[i];
    }
  }
  return ++size;
}