class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *newHead = reverse(head->next);
        ListNode *front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }

    int getDecimalValue(ListNode *head)
    {
        ListNode *newHead = reverse(head);

        ListNode *temp = newHead;
        int number = 0;
        int exponent = 0;
        while (temp != NULL)
        {
            if (temp->val == 1)
            {
                number += pow(2, exponent);
            }
            temp = temp->next;
            exponent++;
        }
        return number;
    }
};