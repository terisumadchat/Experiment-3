#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int size;
	char arr[100],x,y,temp;
	cout <<"Enter array size:";
	cin>>size;
	cout<<"Enter the digits :"<<endl;
	
for (x=0; x<size; x++)
{
	cin>>arr[x];
}
	cout<<"////////////////////////////////////////////////////"<<endl;

for(x=0; x<size; x++)
{
for (y=x+1;x<size;x++)
{
for(y=x+1;x<size;x++)
{
if (arr[x]>arr[y])
{
temp=arr[x];
arr[x]=arr[y];
arr[y]=temp;
}}}}
cout<<"result: { ";

for (x=0;x<size;x++){
cout<<arr[x]<<",";
}
cout<<" }"<<endl;
cout<<"The size of given array is: "<< size;
getch();
return 0;
}
