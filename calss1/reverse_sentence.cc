#include "twj.h"
//反转字符串 abc edc 98==>cba cde 98 数字不反转 
bool IsPunctuationOrSpace(char *character) {
  return *character == ' ' || *character == ',' || *character == '.';
}

bool IsNumber(char *character) {
  return *character >= '0' && *character <= '9';
}

bool NeedReverse(char *sentence, int *offset) {
  int length = (int)strlen(sentence);
  bool need_reverse = false;
  *offset = 0;
  while (!IsPunctuationOrSpace(sentence + (*offset)) && (*offset) < length) {
    /* code */
    if (!IsNumber(sentence + (*offset))) {
      need_reverse = true;
    }
    (*offset)++;
  }
  return need_reverse;
}

void ReverseWord(char *word, int length) {
  int i = 0, j = length - 1;
  while (i < j) {
    std::swap(*(word + i), *(word + j));
    i++;
    j--;
  }
}

void ReverseSentence(char *sentence) {
  int length = (int)strlen(sentence);
  int offset;
  for (int i = 0; i < length;) {
    if (NeedReverse(sentence + i, &offset)) {
      ReverseWord(sentence + i, offset);
    }
    i += (offset + 1);
  }
}