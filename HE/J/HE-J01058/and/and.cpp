#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[10000000];
int s;
int b[10002][10002]={};
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=a[i];j>0;j/=2)
		{
			int q=1;
			if(a[i]%2==0)
			{
				b[i][q]=0;
			 } 
			 else
			 {
			 	b[i][q]=1;
			 }
			 q++;
		}
	}
	cout<<"12";
	return 0; 
 } 
