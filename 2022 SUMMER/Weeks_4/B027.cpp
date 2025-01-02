#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int listSize(ListNode* head){
        int count = 0;
        for(ListNode * t = head ; t != NULL ; t= t->next){
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int size = listSize(head);
        ListNode* middle = head;
        if(size%2 == 0)
            for(int i = 0 ; i < size/2; i++)
                middle = middle->next;
        else
            for(int i = 0 ; i < size/2; i++)
                middle = middle->next;
        return middle;
    }
};
