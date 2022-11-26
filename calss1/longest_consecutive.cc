#include "twj.h"
//找数组中连续数字 最长值
struct Bound {
  /* data */
  int high;
  int low;
  Bound(int h = 0, int l = 0) {
    high = h;
    low = l;
  }
};

int longest_consecutive(std::vector<int> &num) {
  std::unordered_map<int, Bound> table;

  int local;
  int max_len = 0;
  for (int i = 0; i < num.size(); i++) {
    if (table.count(num[i])) {
      continue;
      ;
    }

    local = num[i];
    int low = local, high = local;
    if (table.count(local - 1)) {
      low = table[local - 1].low;
    }
    if (table.count(local + 1)) {
      high = table[local + 1].high;
    }

    table[low].high = table[local].high = high;
    table[high].low = table[local].low = low;

    if (high - low + 1 > max_len) {
      max_len = high - low + 1;
    }
  }

  return max_len;
}
