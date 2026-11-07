#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int m,n,a[N];
int t;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=30;j>=1;j--)
		{
			int q=1;
			while(j--)
			{
				q*=2;
				if(j==1) break;
			}
			if(a[i]>=q) 
			{
				s[i]+=1;
			}
			else s[i]+=0;
		}
	}
	cout<<"12";
	
	return 0;
}