#include "twj.h"
//吧两个排好序的数组A B 放在A中
void MergeSortedArray(int A[], int m, int B[], int n) {
  int index = m + n;
  while (m > 0 && n > 0) {
    if (A[m - 1] > B[n - 1]) {
      A[--index] = A[--m];
    } else {
      A[--index] = B[--n];
    }
  }
  while (m > 0) {
    A[--index] = A[--m];
  }
  while (n > 0) {
    A[--index] = B[--n];
  }
}