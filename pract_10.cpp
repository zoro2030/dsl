#include <iostream>
#define max 100
using namespace std;
class mar
{
public:
 int arr[max], temp, n, left, right, largest,z;
 void create();
 void hfy(int);
};
void mar::hfy(int i)
{
 right = 2 * i + 2;
 left = 2 * i + 1;
 largest = i;
 if (left < n && arr[left] > arr[largest])
 {
 largest = left;
 }
 if (right < n && arr[right] > arr[largest])
 {
 largest = right;
 }
 if (i != largest)
 {
 temp = arr[i];
 arr[i] = arr[largest];
 arr[largest] = temp;
 hfy(largest);
 }
}
void mar::create()
{
 cout << "Enter the number of students:=" << endl;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
 cout << "Enter the marks for student no." << i + 1 << " :=" << endl;
 cin >> arr[i];
 }
 for (int i = (n / 2) - 1; i >= 0; i--)
 {
 hfy(i);
 }
 z=n;
 for(int i=n-1;i>=0;i--){
 temp=arr[i];
 arr[i]=arr[0];
 arr[0]=temp;
 n--;
 hfy(0);
 } 
 cout<<"Maximum marks obtained in the subject:="<<endl;
 cout<<arr[z-1]<<endl;
 cout<<"Minimum marks obtained in the subject:="<<endl;
 cout<<arr[0]<<endl;
 
}
int main()
{
 mar ab;
 ab.create();
 return 0;
}