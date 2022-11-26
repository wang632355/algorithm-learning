//比较母字符串中是否包含子字符串
char *StrStr(const char *str, const char *target) {
  if (!*target) {
    return const_cast<char *>(str);
  }
  char *p1 = (char *)str;
  while (*p1) {
    char *p1_begin = p1, *p2 = (char *)target;
    while (*p1 && *p2 && *p1 == *p2) {
      p1++;
      p2++;
    }
    if (!*p2) {
      return p1_begin;
    }
    p1 = p1_begin + 1;
  }
  return nullptr;
}