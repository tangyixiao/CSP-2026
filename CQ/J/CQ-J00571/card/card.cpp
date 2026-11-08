#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m,fgA;
int a[N],w[N],w2[N],ans[M];
vector<int> zwl[M];
struct bbjdcf{int k,gs;}b[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];zwl[a[i]].push_back(i);
		b[i].k=a[i],b[i].gs=zwl[a[i]].size();
		if(i!=1&&a[i]<a[i-1]) fgA=1;
	}
	if(fgA==0)
	{
		//cout<<zwl[1][2];
		for(int i=1;i<=m;i++) cout<<zwl[i][zwl[i].size()-1]<<' ';
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		memset(w,0,sizeof(w));
		memset(w2,0,sizeof(w2));
		int l=i;
		for(int j=l;j<=n;j++)
		{
			if(b[j].gs>=2&&zwl[a[j]][b[j].gs-2]>=l) 
			{
				int pb=zwl[a[j]][b[j].gs-2];
				for(int k=pb;k<j;k++) 
					if(w[k]==0) w[k]=1;
				//cout<<endl;
				if(pb==l) l=j;
			}
		}
		for(int j=i;j<=n;j++) 
			if(w[j]==0&&w2[a[j]]==0) w2[a[j]]=1,ans[a[j]]++;
		//cout<<endl<<endl;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;	
} 
//10 3
//3 1 2 1 3 2 3 1 2 1

