#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int c = 0;
struct adj_list
{
    int dest;
    adj_list *next;
}*np = NULL, *np1 = NULL, *p = NULL, *q = NULL;
struct Graph
{
    int v;
    adj_list *ptr;
} array[5];
void addReverseEdge(int src,int dest)
{
    np1 = new adj_list;
    np1->dest = src;
    np1->next = NULL;
    if (array[dest].ptr == NULL)
        {
            array[dest].ptr = np1;
            q = array[dest].ptr;
            q->next = NULL;
        }
    else
        {
            q = array[dest].ptr;
            while (q->next != NULL)
                {
                    q = q->next;
                }
            q->next = np1;
        }
}
void addEdge(int src,int dest)
{
    np<!--more--> = new adj_list;
    np->dest = dest;
    np->next = NULL;
    if (array[src].ptr == NULL)
        {
            array[src].ptr = np;
            p = array[src].ptr;
            p->next = NULL;
        }
    else
        {
            p = array[src].ptr;
            while (p->next != NULL)
                {
                    p = p->next;
                }
            p->next = np;
        }
    addReverseEdge(src,dest);
}
void print_graph(int n)
{
    for (int i = 0; i < n; i++)
        {
            cout<<"Adjacency List of "<<array[i].v<<endl;
            while (array[i].ptr != NULL)
                {
                    cout<<(array[i].ptr)->dest<<"\t";
                    array[i].ptr = (array[i].ptr)->next;
                }
            cout<<endl;
        }
}
int main()
{
    int n;
    cout<<"Enter the no of vertices\n";
    cin>>n;
    for (int i = 0; i < n; i++)
        {
            array[i].v = i;
            array[i].ptr = NULL;
        }
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);
    print_graph(n);
    getch();
}
