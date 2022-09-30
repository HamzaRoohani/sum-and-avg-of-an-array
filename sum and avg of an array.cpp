#include<iostream>

using namespace std;

int main()
{
	int sum=0,count=1,average,array[5];
	
	cout<<"Enter any five numbers";
	
	for(int i=1;i<=5;i++)
	{	
		cin>>array[i];
		
		sum+=i;
		
		average=sum/count;
		
		++count;
	}
	cout<<"The sum of the five numbers is: "<<sum<<endl;
	
	cout<<"The average of the five numbers is: "<<average<<endl;
	
	return 0;
}