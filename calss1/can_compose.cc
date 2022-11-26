#include <iostream>
#include <unordered_map>

//newspaper中字符包含message
bool CanCompose(std::string newspaper, std::string message) {
  std::unordered_map<char, int> hash_map;
  if (newspaper.length() < message.length()) {
    return false;
  }

  for (int i = 0; i < newspaper.length(); i++) {
    hash_map[newspaper[i]]++;
  }

  for (int i = 0; i < message.length(); i++) {
    if (hash_map.count(message[i]) == 0) {
      return false;
    }
    if (--hash_map[message[i]] < 0) {
      return false;
    }
  }
  return true;
}