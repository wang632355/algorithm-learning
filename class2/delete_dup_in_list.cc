#include "twj_class2.h"
//删除重复链表
ListNode *DeleteDuplicates(ListNode *head) {
  if (head == NULL) {
    return NULL;
  }

  ListNode *node = head;
  while (node->next != NULL) {
    if (node->value == node->next->value) {
      ListNode *temp = node->next;
      node->next = node->next->next;
      delete temp;
    } else {
      node = node->next;
    }
  }
  return head;
}