#include<iostream>
using namespace std;
//*********Creating Stack************
class sta
{
	public:
		int arr[20];
		int top;
	public:
	sta()
	{
		top=-1;
	};
	public:
		bool isempty();
		void push(int a);
		int pop();
};

bool sta::isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void sta::push(int a)
{
	top++;
	arr[top]=a;
}

int sta::pop()
{
	int b;	
	if(!isempty())
	{
		b=arr[top];
		top--;	
	}
	return b;
}
//************DFS***********
class DFS
{
	public:
		int a[10][10],visited[20],n;
		sta obj;
	public:
		void matrix(int n);
		void dfs(int,int);
};
//************Reading Graph***************
void DFS::matrix(int n)
{
	int e,v1,v2;	
	for(int i=0;i<n;i++)
	{
		visited[i]=0;
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;		
		}			
	}
	cout<<"Enter number of edges :";
	cin>>e;
	for(int i=0;i<e;i++)
	{
		cout<<"Enter edge\n";		//Enetr vertices having edges.
		cin>>v1>>v2;
		a[v1][v2]=1;
		a[v2][v1]=1;
	}	
}
//************DFS function***********
void DFS::dfs(int x,int n)
{
	int i;
	obj.push(x);
	cout<<"DFS:";
	cout<<"\n";
	while(!obj.isempty())
	{
        int y=obj.pop();
		cout<<y;
		visited[y]=1;
		for(i=0;i<n;i++)
		{
			if(i!=y)		
			{
				if(!visited[i] && a[y][i]==1)
				{
					obj.push(i);
					visited[i]=1;		
				}	
			}
		}
	}		
}

int main()
{
	int n;
	cout<<"\nEnter no.of Vertices :";
	cin>>n;
	DFS obj1;
	obj1.matrix(n);
	obj1.dfs(0,n);
	cout<<"\n";
	return 0;	
}
