#include<iostream>
#include<string.h>
using namespace std;
struct node
{
    string label;
    int count;
    node *next;
    node *child[50];
};

void creat()
{
    string name;
    struct node *nn;
    struct node *root=NULL;
    nn = new node;
    cout<<"\nEneter the label of book :";
    cin>>nn->label;
    root = nn;
    cout<<"\nEnter number of chapter in book :";
    cin>>root->count;
    for(int i=0;i<root->count;i++)
    {
        root->child[i] = new node;
        cout<<"\nEnter name of chapter :";
        cin>>root->child[i]->label;
    }
}

int main()
{
    creat();
    return 0;
}