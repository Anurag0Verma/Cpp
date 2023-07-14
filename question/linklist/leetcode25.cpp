#include <bits/stdc++.h>
using namespace std;

// 25 Reverse Nodes in k-Group

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} *first;

void create(int A[], int n)
{

    struct ListNode *t, *last;

    first = (struct ListNode *)malloc(sizeof(struct ListNode));
    first->val = A[0];
    first->next = NULL;

    last = first;
    // Create linked list
    for (int i = 1; i < n; i++)
    {
        t = (struct ListNode *)malloc(sizeof(struct ListNode));
        t->val = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void reverse(ListNode *s, ListNode *e)
{
    // used  in fraz solution
    ListNode *p = NULL, *c = s, *n = s->next;
    while (p != e)
    {
        c->next = p;
        p = c;
        c = n;
        if (n != NULL)
            n = n->next;
    }
}

ListNode *reverseKGroup(ListNode *head, int k)
{
    // // take u forward solution
    // if (not head or k == 1)
    //     return head;

    // ListNode *dummy = new ListNode(0);
    // dummy->next = head;

    // ListNode *cur = dummy, *nex = dummy, *pre = dummy;
    // int count = 0;

    // while (cur->next)
    // {
    //     cur = cur->next;
    //     count++;
    // }

    // while (count >= k)
    // {
    //     cur = pre->next;
    //     nex = cur->next;

    //     for (int i = 1; i < k; i++)
    //     {
    //         cur->next = nex->next;
    //         nex->next = pre->next;
    //         pre->next = nex;
    //         nex = cur->next;
    //     }
    //     pre = cur;
    //     count -= k;
    // }

    // return dummy->next;

    //  fraz solution using without extra space recursion

    if (head == NULL or head->next == NULL or k == 1)
        return head;

    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *beforeStart = dummy, *e = head;
    int i = 0;
    while (e != NULL)
    {
        i++;
        if (i % k == 0)
        {
            ListNode *s = beforeStart->next, *temp = e->next;
            reverse(s, e);
            beforeStart->next = e;
            s->next = temp;
            beforeStart = s;
            e = temp;
        }
        else
        {
            e = e->next;
        }
    }
    return dummy->next;
}

void display(struct ListNode *p)
{
    while (p != 0)
    {
        cout << p->val << " ";
        p = p->next;
    }
}

int main()
{

    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    create(A, n);

    display(reverseKGroup(first, 2));

    return 0;
}