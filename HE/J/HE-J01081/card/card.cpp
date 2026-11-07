#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],ans[300004],c[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];//shu ru
	for(int q=1;q<=n;q++)//ji ci you xi
	{
		for(int i=q;i<=n;i++)//chu pai
		{
			int f=0;
			int cnt;
			for(int j=q;j<i;j++)//you mei you zhe ge shu
			{
				if(a[i]==c[j])
				{
					f=1;//you
					cnt=j;
					break;
				}
			}
			if(f==1)//you 
			{
				for(int t=cnt;t<i;t++) c[t]=0;//qing chu
				c[i]=a[i];
			}
			else c[i]=a[i];//mei you
		}
		for(int y=q;y<=n;y++)
		{
			if(c[y]!=0) ans[c[y]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(ans[i]!=0) cout<<ans[i]<<" ";
//		cout<<ans[i]<<" ";
	}
	return 0;
}



