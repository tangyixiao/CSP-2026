#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
long long n,m;
long long ans[100010];
long long ansi[100010];
long long a[200020];
vector<long long> s;
void ad()
{
	for(int z=1;z<=m;z++)
		if(ansi[z]!=0) ans[z]++;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++) cin>>a[i];
	for(long long i=0;i<n;i++)
	{
			for(long long jj=i;jj<n;jj++)
		{
			if(ansi[a[jj]]!=0)
			{
				for(long long j=s.size()-1;j>=0;j--)
				{
					if(s[j]!=a[jj])
					{
						ansi[s[j]]=0;
						s[j]=0;
					}
					else break;
				}
			}
			else 
			{
				ansi[a[jj]]=1;
				s.push_back(a[jj]);
			}
		}
//		cout<<endl;
		ad();
	}
	for(long long i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}