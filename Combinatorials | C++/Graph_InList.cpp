#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct node
{
    int from, to;
} a[5], t;
struct list
{
    int v;
    list *next;
}*head[5], *np = NULL, *ptr = NULL;
void addEdge(int am[][5], int i, int j, int in)
{
    a[in].from = i;
    a[in].to = j;
    for (int p = 0; p <= in; p++)
        {
            for (int q = p + 1; q <= in; q++)
                {
                    if (a[p].from > a[q].from)
                        {
                            t = a[p];
                            a[p] = a[q];
                            a[q] = t;
                        }
                    else if (a[p].from == a[q].from)
                        {
                            if (a[p].to > a[q].to)
                                {
                                    t = a[p];
                                    a[p] = a[q];
                                    a[q] = t;
                                }
                        }
                    else
                        {
                            continue;
                        }
                }
        }
}
void gen_graph(int am[][5])
{
    int k;
    for(int i = 0; i < 5; i++)
        {
            k = 0;
            for(int j = 0; j < 5; j++)
                {
                    if (am[j][i] == 1 && k == 0)
                        {
                            np = new list;
                            np->v = j;
                            head[i] = np;
                            ptr = head[i];
                            ptr->next = NULL;
                            k++;
                        }
                    else if (am[j][i] == 1 && k != 0)
                        {
                            np = new list;
                            np->v = j;
                            ptr->next = np;
                            ptr = ptr->next;
                        }
                }
        }
}
void print_graph()
{
    int j;
    cout<<endl;
    for(int i = 0; i < 5; i++)
        {
            ptr = head[i];
            j = 0;
            cout<<"List for "<<i<<"th edge:-";
            while (j < 2)
                {
                    cout<<ptr->v<<"\t";
                    ptr = ptr->next;
                    j++;
                }
            cout<<endl;
        }
}
int main()
{
    int n, c = 0, x, y, ch, i, j;
    cout<<"Enter the no of vertices\n";
    cin>>n;
    int am[5][5];
    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
                {
                    am[i][j] = 0;
                }
        }
    while (ch != -1)
        {
            cout<<"Enter the nodes between which you want to introduce edge\n";
            cin>>x>>y;
            addEdge(am,x,y,c);
            c++;
            cout<<"Press -1 to exit\n";
            cin>>ch;
        }
    for (int j = 0; j < c; j++)
        {
            am[a[j].from][j] = 1;
            am[a[j].to][j] = 1;
        }
    cout<<"Incidence List:"<<endl;
    gen_graph(am);
    print_graph();
    getch();
}
