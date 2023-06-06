#include<iostream>
#include<fstream>
using namespace std;

struct student
{
	int rno;
	string name;
	char div;
	string address;
};

void write(int n)
{
	student s[100];
	fstream file;
	file.open("file.txt",ios::out);
	for(int i=0;i<n;i++)
	{
		cout<<"Enter roll no.: ";
		cin>>s[i].rno;
		file<<"Roll Number: "<<s[i].rno<<"\t";

		cout<<"Enter name: ";
		cin>>s[i].name;
		file<<"Name : "<<s[i].name<<"\t";
		
		cout<<"Enter division: ";
		cin>>s[i].div;
		file<<"Division: "<<s[i].div<<"\t";
		
		cout<<"Enter address: ";
		cin>>s[i].address;
		file<<"Address: "<<s[i].address<<"\t";
		file<<endl;	
	}
	file.close();
}

void read()
{
  	fstream newfile;
  	newfile.open("file.txt",ios::in);
  	if (newfile.is_open())
	{ 
    	string containt;
    	while(getline(newfile, containt))
		{
        	cout << containt << "\n"; 
    	}
	}
    newfile.close(); 
}
 void append(int n)
 {
 	fstream file;
 	file.open("file.txt",ios::app);
 	student s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter roll no.: ";
		cin>>s[i].rno;
		file<<"Roll Number: "<<s[i].rno<<"\t";

		cout<<"Enter name: ";
		cin>>s[i].name;
		file<<"Name : "<<s[i].name<<"\t";
		
		cout<<"Enter division: ";
		cin>>s[i].div;
		file<<"Division: "<<s[i].div<<"\t";
		
		cout<<"Enter address: ";
		cin>>s[i].address;
		file<<"Address: "<<s[i].address<<"\t";
		file<<endl;	
	}
	file.close();
 	
 }
int main()
{
	int ch,n;
	
	cout<<"----------FILE HANDALING------------------"<<endl;
	cout<<"1)Write in file \n2)Read from file \n3)Add data in file \n4)Exit\n";
	do
	{
		cout<<"\nEnter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter how many students are there in class: ";
				cin>>n;
				write(n);
				break;
			case 2:
				read();
				break;
			case 3 :
				cout<<"Enter how many students do you want to add: ";
				cin>>n;
				append(n);
				break;
			case 4 :
				cout<<"Exit"<<endl;
				break;	
			default:
				cout<<"Invalid choice!!"<<endl;		
		}
	}while(ch!=4);
	return 0;
}
