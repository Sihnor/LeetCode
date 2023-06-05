#include "Solution.h"
#include <iostream>

Solution::Solution(/* args */) {}

Solution::~Solution() {}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
  ListNode *ptr1 = l1;
  ListNode *ptr2 = l2;

  int val1 = ptr1->val;
  int val2 = ptr2->val;

  ListNode *result = new ListNode();
  ListNode *ptrResult = result;

  bool notFinished = true;

  while (notFinished) {

    ptrResult->val += ((val1 + val2));

    bool isBiggerOrEqualTen = (ptrResult->val >= 10);

    ptrResult->val %= 10;

    if (!ptr1->next && !ptr2->next) {
      notFinished = false;

      if (isBiggerOrEqualTen) {
        ptrResult->next = new ListNode(1);
      }
      std::cout << "fiinished" << std::endl;
      break;
    }

    if (isBiggerOrEqualTen) {
      ptrResult->next = new ListNode(1);
    } else {
      ptrResult->next = new ListNode(0);
    }

    ptrResult = ptrResult->next;

    // Is there is next Object
    if (ptr1->next) {
      ptr1 = ptr1->next;
      val1 = ptr1->val;
    } else {
      val1 = 0;
    }

    // Is there is next Object
    if (ptr2->next) {
      ptr2 = ptr2->next;
      val2 = ptr2->val;
    } else {
      val2 = 0;
    }
  }

  return result;
}