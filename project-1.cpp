#include<iostream>
#include<conio.h>

using namespace std;


int main ()
{
    int arr[10], x, y, max, min,sum;
	y=0;
 
  for(y = 0; y < 10; ++y)
    {
    cout << "Enter a Number " << y+1 << " : ";
    cin >> arr[y];
    sum += arr[y];
    }
    
    max = arr[0];
    
    for (y = 0; y < 10; y++)
    {
    if (max < arr[y])
    max = arr[y];
    }
    min = arr[0];
    for (y = 0; y < 10; y++)
    {
    if (min > arr[y])
    min = arr[y];
    }
    cout << "Greatest number : " << max<<endl;
    cout << "Smallest number : " << min<<endl;
    cout<<"Total: "<<sum<<endl;
    cout<<"Mean: "<<sum/10<<endl;
    getch();
    return 0;
}
