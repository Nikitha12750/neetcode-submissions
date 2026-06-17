/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res=new ListNode(0);
        ListNode* curr=res;
        while(true){
            int minnode=-1;
            for(int i=0;i<lists.size();i++){
                if(!lists[i]) continue;
                if(minnode==-1||lists[minnode]->val>lists[i]->val){
                    minnode=i;
                }
            }
            if(minnode==-1) break;
            curr->next=lists[minnode];
            lists[minnode]=lists[minnode]->next;
            curr=curr->next;
        }
        return res->next;
    }
};
