#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    // Create linked list
    for (int i = 0; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void recursive_display(struct Node *p)
{
    if (p != NULL)
    {
        // forward print
        cout << p->data << " ";

        recursive_display(p->next);

        // backward print
        cout << p->data << " ";
    }
}

int main()
{
    system("cls");

    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    recursive_display(first);
    return 0;
}