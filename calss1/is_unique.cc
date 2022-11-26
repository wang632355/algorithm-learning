#include <bitset>
#include <iostream>

//判断字符串中char 是否是unique
bool IsUnique(std::string input) {
  std::bitset<256> hash_map;
  for (int i = 0; i < input.length(); i++) {
    if (hash_map[(int)input[i]]) {
      return false;
    }
    hash_map[(int)input[i]] = 1;
  }
  return true;
}