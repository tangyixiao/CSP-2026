#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
queue<int> q;
int a[500010],cnt[500010],cnt2[500010],flag2[500010]; 
int main(){
	freopen("card.in",r,stdin);
	freopen("card.out",w,stdout);
	int n,m,last=1;
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++)
	{
		for (int j=i;j<=n;j++)
		{
			q.push(a[j]);
			cnt[a[j]]++;
			if (cnt[a[j]]==2)
			{
				for (int k=1;k<=j-last;k++) q.pop();
				last=j;
				cnt[a[j]]=1;
			}
		}
		while (!q.empty())
		{
			cnt2[q.front()]++;
			q.pop();
		}
		for (int i=1;i<=n;i++) cnt[a[i]]=0;
	}
	for (int i=1;i<=m;i++) cout<<cnt2[i]<<" ";
	return 0; 
}
