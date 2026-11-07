#include<bits/stdc++.h>
using namespace std;
char hw[100000000];
int main()
{
	int n,m=0,js=0;
	cin>>n;
	int a;
	char b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		for(int j=0;j<a;j++)
		{
			hw[m]=b;
		m++;
		}
		
	 } 
	 for(int o=0;o<m/2;o++)
	 {
	 	if(hw[o]!=hw[m-o-1])
	 	{
	 	js++;
		 }
	 }
	 cout<<js;
}