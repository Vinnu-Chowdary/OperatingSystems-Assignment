#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n=10;
	int b[10]={'a','b','c','d','e','f','g','h','i','j'};
	cout<<"Enter number of gifts purchased by each student";
	
	for(int i = 0;i < n;i++){
	    cin>>a[i];
	}
	for(int i = 0;i<n-1;i++)
	{
        
		for(int j = 0;j< n - i - 1;j++)
		{
			if(a[j] < a[j+1])
			{ 
                int giftTemp = a[j];
                a[j] = a[j+1];
                a[j+1] = giftTemp;
                
                char studentTemp = b[j];
                b[j] = b[j+1];
                b[j+1] = studentTemp;
			}
			
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<char(b[i])<<" "<<a[i]<<endl;
	}
}
