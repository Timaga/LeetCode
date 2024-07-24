#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;






 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

 class Solution {
 public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         vector<int> list3;

         // Заполняем вектор list3 значениями из list1
         while (list1 != nullptr) {
             list3.push_back(list1->val);
             list1 = list1->next;
         }

         // Заполняем вектор list3 значениями из list2
         while (list2 != nullptr) {
             list3.push_back(list2->val);
             list2 = list2->next;
         }

         // Сортируем вектор list3
         sort(list3.begin(), list3.end());

         ListNode* finalList = new ListNode();
         ListNode* currentNode = finalList;

         // Создаем итоговый список finalList из значений вектора list3
         for (int i = 0; i < list3.size(); i++) {
             currentNode->next = new ListNode(list3[i]);
             currentNode = currentNode->next;
         }

         return finalList->next; // Возвращаем первый элемент, так как первый элемент - пустой узел
     }
 };

int main() {
	Solution a;
	ListNode list1;
	list1.val = 1;
	list1.next;
	list1.val = 2;
	list1.next;
	list1.val = 4;
	ListNode list2;
	list2.val = 1;
	list2.next;
	list2.val = 3;
	list2.next;
	list2.val = 4;
	cout << a.mergeTwoLists(&list1,&list2);
	return 0;
}

