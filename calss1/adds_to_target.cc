#include "twj.h"
//在数组中找两数之和等于target索引
std::vector<int> AddToTarget(std::vector<int> &numbers, int target) {
  std::unordered_map<int, int> num_to_index;
  std::vector<int> vi(2);
  for (auto it = numbers.begin(); it != numbers.end(); it++) {
    if (num_to_index.count(target - *it)) {
      vi[0] = (int)(it - numbers.begin()) + 1;
      vi[1] = num_to_index[target - *it] + 1;
      return vi;
    }
    num_to_index[*it] = (int)(it - numbers.begin());
  }
}