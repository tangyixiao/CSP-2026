#include<iostream>
using namespace std;
const int N=200000;
int a[N];
char c[N];
int main()
{
	string b;
	int n;
	int f;
	cin>>n;
	int g=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>c[i];
		for(int j=0;j<a[i];j++)
		{
		b=b+c[i];
	    }
		g+=a[i];
	}
	for(int i=0;i<g/2;i++)
	{
		if(b[g-i-1]==b[i]){
			continue;
		}
		else{
			++f;
		}
	}
	cout<<f;
	return 0;
 } 
