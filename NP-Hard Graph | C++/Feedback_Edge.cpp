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
} array[6];
void addReverseEdge(int src, int dest)
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
void addEdge(int src, int dest)
{
    np = new adj_list;
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
    //addReverseEdge(src, dest);
}
void print_graph(int n)
{
    for (int i = 0; i < n; i++)
        {
            cout << "Adjacency List of " << array[i].v << ": ";
            while (array[i].ptr != NULL)
                {
                    cout << (array[i].ptr)->dest << " ";
                    array[i].ptr = (array[i].ptr)->next;
                }
            cout << endl;
        }
}

int checkDAG(int n)
{
    int count = 0;
    int size = n - 1;
    for (int i = 0; i < n; i++)
        {
            if (count == size)
                {
                    return 0;
                }
            if (array[i].ptr == NULL)
                {
                    count++;
                    for (int j = 0; j < n; j++)
                        {
                            while (array[j].ptr != NULL)
                                {
                                    if ((array[j].ptr)->dest == (array[i].ptr)->dest)
                                        {
                                            (array[j].ptr)->dest = -1;
                                        }
                                    array[i].ptr = (array[i].ptr)->next;
                                }
                        }
                }
        }
    cout<<"after checking dag";
    int visited[n + 1];
    for (int i = 0; i < n; i++)
        {
            while (array[i].ptr != NULL)
                {
                    cout << (array[i].ptr)->dest << " ";
                    visited[i] = 1;
                    for (int j = 0; j < n; j++)
                        {
                            while (array[j].ptr != NULL)
                                {
                                    cout << (array[j].ptr)->dest << " ";
                                    if (visited[array[j].v] == 1)
                                        {
                                            cout << array[i].v << " - " << array[j].v;
                                        }
                                    array[j].ptr = (array[j].ptr)->next;
                                }
                            cout << endl;
                        }
                    array[i].ptr = (array[i].ptr)->next;
                }
            cout << endl;
        }
    return 1;
}
int main()
{
    int n = 6;
    cout << "Number of vertices: " << n << endl;
    for (int i = 0; i < n; i++)
        {
            array[i].v = i;
            array[i].ptr = NULL;
        }
    addEdge(0, 1);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(3, 4);
    addEdge(4, 5);
    addEdge(3, 5);
    addEdge(5, 2);
    print_graph(n);
    cout << "Feedback arc Set: ";
    if (checkDAG(n) == 0)
        cout << " None";
}
