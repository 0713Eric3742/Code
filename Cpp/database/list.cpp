#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data; //儲存的資料
    struct node *next; //指到下一個struct的指針
};
int main()
{
    struct node *head; //指到第一個struct的指針
    struct node *temp, *last;
    head = NULL;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        temp = new struct node;
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
            head = temp;
        else
            last->next = temp;
        last = temp;
    }
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}
/*
	input:
	5
	1 2 3 4 5
	output:
	1 2 3 4 5
*/