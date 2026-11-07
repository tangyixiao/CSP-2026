#include <bits/stdc++.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
string s;
char c[200010];
long long a[200010];
//long long b[200010];
long long ans=0;
int main(int argc, char** argv)
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	//long long mi=0;
	//for(int i=1;i<=n;i++)mi+=a[i];
	//mi=mi/2+0.5;
	int r=1,l=n;
	while(r!=l)
	{
		if(c[r]!=c[l])
		{
			if(a[r]==a[l])
			{
				
				ans=ans+a[r];
				a[r]=0;
				a[l]=0;
				if((l-r)==1)break;
				l--;r++;
			}
			else if(a[r]>a[l])
			{
				ans=ans+a[l];
				a[r]=a[r]-a[l];
				a[l]=0;
				l--;
			}
			else// if(a[r]<a[l])
			{
				ans=ans+a[r];
				a[l]=a[l]-a[r];
				a[r]=0;
				r++;
			}
		}
		else
		{
			if(a[r]==a[l])
			{
				a[r]=0;
				a[l]=0;
				if((l-r)==1)break;
				l--;r++;
			}
			else if(a[r]>a[l])
			{
				a[r]=a[r]-a[l];
				a[l]=0;
				l--;
			}
			else// if(a[r]<a[l])
			{
				a[l]=a[l]-a[r];
				a[r]=0;
				r++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/