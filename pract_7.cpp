#include<iostream>
#include<string.h>
using namespace std;
 
class flight
{    
    public:
        int m[10][10],a[10][10],n,i,j; 
        char ch;
        string v[20];   

    public:
        void getgraph();
        void displaym();
};
void flight::getgraph()
{
    cout<<"\n enter no. of cities :";
    cin>>n;
    cout<<"\n enter name of cities :\n";
    for(i=0;i<n;i++)
    {
        cin>>v[i];         
    }
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
        {  
            if(i==j)
            {
                m[i][j]=0;
                a[i][j]=0;
            }
            else{
                cout<<"\n Path is present between city "<<v[i]<<" and "<<v[j]<<" in Kilo-meter :";
                cin>>a[i][j]; 
        
                cout<<"\n enter time required to reach city "<<v[j]<<" from "<<v[i]<<" in minutes :";
                cin>>m[i][j];
            }
        }
    }       

}

void flight::displaym()
{   
    cout<<"\n";
    cout<<"**********Distance Graph************\n";
    for(j=0;j<n;j++)
    {  
        cout<<"\t\t"<<v[j];  
    }

    for(i=0;i<n;i++)
    {  
        cout<<"\n"<<v[i];
        for(j=0;j<n;j++)
        {   
            cout<<"\t\t"<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"**********Time Graph************\n";
    for(j=0;j<n;j++)
    {  
        cout<<"\t\t"<<v[j];  
    }

    for(i=0;i<n;i++)
    {  
        cout<<"\n"<<v[i];
        for(j=0;j<n;j++)
        {   
            cout<<"\t\t"<<m[i][j];
        }
        cout<<"\n";
    }
}   
int main()
{  int m;   
   flight a;

   while(1)
   {
   cout<<"\n\n enter the choice";
   cout<<"\n 1.enter graph";
   cout<<"\n 2.display adjacency matrix for cities";
   cout<<"\n 3.exit";
   cout<<"\nEnter Your Choice :";
   cin>>m;
  
        switch(m)
       {  
            case 1: a.getgraph();
                    break;
            case 2: a.displaym();
                    break;
            case 3: exit(0);     
            default:  
                    cout<<"\n unknown choice";
        }
    }
    return 0;
}                            
  
               
