

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        // to avoid null in case [][] / [][0]
        ListNode *head = new ListNode(0);
        ListNode *tail = head;

        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val >= l2->val)
            {

                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
            else if (l1->val < l2->val)
            {

                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            }
        }

        if (l1 == NULL)
            tail->next = l2;
        else if (l2 == NULL)
            tail->next = l1;

        return head->next;

        ListNode *result = NULL;

        if (l1 == NULL)
        {
            return l2;
        }
        else if (l2 == NULL)
        {
            return l1;
        }

        if (l1->val >= l2->val)
        {
            result = l2;
            result->next = mergeTwoLists(l1, l2->next);
        }
        else if (l1->val < l2->val)
        {
            result = l1;
            result->next = mergeTwoLists(l1->next, l2);
        }

        return result;
    }
};
