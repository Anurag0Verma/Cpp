#include <bits\stdc++.h>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// } *first = NULL;

// void create(int A[], int n)
// {
//     int i;
//     struct Node *t, *last;
//     first = (struct Node *)malloc(sizeof(struct Node));
//     first->data = A[0];
//     first->next = NULL;
//     last = first;

//     // Create linked list
//     for (int i = 1; i < n; i++)
//     {
//         t = (struct Node *)malloc(sizeof(struct Node));
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

// void display(struct Node *p)
// {
//     while (p != 0)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
// }

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} *first = NULL;

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
    system("cls");

    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A) / sizeof(A[0]);
    create(A, n);
    display(first);
    return 0;
}