#include "twj_class2.h"

ListNode *DeleteDuplicates(ListNode *head) {
  if (head == NULL) {
    return NULL;
  }
  ListNode *dummy = new ListNode;
  dummy->next = head;
  ListNode *node = dummy;
  while (node->next != NULL && node->next->next != NULL) {
    if (node->next->value == node->next->next->value) {
      int val_prev = node->next->value;
      while (node->next != NULL && val_prev == node->next->value) {
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
      }

    } else {
      node = node->next;
    }
  }
  return dummy->next;
}