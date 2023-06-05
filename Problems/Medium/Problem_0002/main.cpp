#include "Solution.h"

#include <iostream>

int main(int argc, char const *argv[]) {

  Solution Test;

  ListNode list1_1(9);
  ListNode list1_2(9, &list1_1);
  ListNode list1_3(9, &list1_2);
  ListNode list1_4(9, &list1_3);
  ListNode list1_5(9, &list1_4);
  ListNode list1_6(9, &list1_5);
  ListNode list1_7(9, &list1_6);

  ListNode List1 = list1_7;

  ListNode list2_1(9);
  ListNode list2_2(9, &list2_1);
  ListNode list2_3(9, &list2_2);
  ListNode list2_4(9, &list2_3);

  ListNode List2 = list2_4;

  ListNode *Result = Test.addTwoNumbers(&List1, &List2);

  do {
    std::cout << Result->val << std::endl;

    Result = Result->next;

  } while (Result);

  return 0;
}
