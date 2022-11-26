#include "twj.h"

int LongestCommonSubstring(std::string &A, std::string &B) {
  if (A.empty() || B.empty()) {
    return 0;
  }
  int lcs = 0;
  for (int i = 0; i < A.length(); i++) {
    for (int j = 0; j < B.length(); j++) {
      int lcs_temp = 0;

      while (i + lcs_temp < A.length() && j + lcs_temp < B.length() &&
             A[i + lcs_temp] == B[j + lcs_temp]) {
        /* code */
        lcs_temp++;
      }
      if (lcs_temp > lcs) {
        lcs = lcs_temp;
      }
    }
  }
  return lcs;
}