#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m,a[N],wei1[N],wei2[N],cnt,maxn=-1e4,maxnn=-1e4,weii[N],e,maxnnn=-1e4;
void nn(int weiyu)
{
	maxn=0;
	cnt=0;
	while(weiyu!=0)
	{
		wei1[cnt]=weiyu%2;
		weiyu/=2;
		cnt++;
	}
	maxn=max(cnt,maxn);
	return;
}
void nnn(int w2)
{
	cnt=0;
	while(w2!=0)
	{
		wei2[cnt]=w2%2;
		w2/=2;
		cnt++;
	}
	maxn=max(cnt,maxn);
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		maxnnn=max(maxnnn,a[i]);
	}
	if(m==1)
	{
		cout<<maxnnn;
		return 0;
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				nn(a[i]);
				nnn(a[j]);
				for(int k=0;k<=maxn;k++)
				{
					weii[k]=wei1[k]&&wei2[k];
				}
				for(int ii=0;ii<maxn;ii++)
				{
					if(weii[ii]==1)
					{
						e=weii[ii]*pow(2,ii);
						maxnn=max(e,maxnn);
					}
				}
			}
		}
	}
	cout<<maxnn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
