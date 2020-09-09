#include<iostream.h>
using namespace std;
int main()
{
int arr[5];
int *p;
p=arr;
cout<<"Enter elements:";
for(int i=0;i<5;i++)
 cin>>p[i];
cout<<"You entered:";
for(int i=0;i<5;i++)
   cout<<p[i]<<"\n";  
return 0;
}
