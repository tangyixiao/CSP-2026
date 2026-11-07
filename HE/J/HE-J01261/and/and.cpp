#include<bits/stdc++.h>
using namespace std;
int pf(int l)
{
	int h=1;
	for(long long i=1;i<=l;i++)
	{
		h*=2;
	}
	return h;
}
long long n,m,maxn,q1,w1,ans;
bool q[8],w[8],t[8];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	long long a[n+1];
	for(long long i=1;i<=n;i++){
		cin >> a[i];
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=n;j>=1;j--)
		{
			q1=a[i];
			w1=a[j];
			for(long long e=8;e>=1;e--)
			{
				if(q1>pf(e))
				{
					q1-=pf(e);
					q[e]==1;
				}
				if(w1>pf(e))
				{
					w1-=pf(e);
					w[e]==1;
				}
				t[e]=(w[e]&&q[e]);
				if(t[e])
				{
					ans+=pf(e);
				}
			}
			if(i>=j){
				break;
			}
			if(maxn<ans)
			{
				maxn=ans;
			}
		}
	}
	cout << maxn;
	fclose(stdin);
	fclose(stdin);
	return 0;
}
