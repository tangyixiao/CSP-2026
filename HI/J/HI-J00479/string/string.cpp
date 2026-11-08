#include<bits/stdc++.h>
using namespace std;
int a[100005];
char c[100005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	int smid=n/2;
	for(int i=n-1;i>=0;i--)
	{
		if(n%2==0)
		{
			if(c[i]==c[i-smid-(i-smid)-1])
			{
				
			}
		}
		
	}
}
