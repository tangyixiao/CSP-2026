#include<bits/stdc++.h>//暴力第四版（没有问题），每个一定会存在的数最后一次出现的位置的下一个也一定会存在，但好像还是要TLE，另外加了个特判 
using namespace std;
int n,m;
int a[500005];
int b[500005];
int c[500005];
int ans[500005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]=i;//最后一次出现的位置 
		if(a[i]<a[i-1])f=0;
	}
	if(f){//特殊性质A 
		for(int i=1;i<=n;i++){
			if(c[a[i]]==0)c[a[i]]=i;
		}
		for(int i=1;i<=m;i++){
			cout<<n+1-c[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		int k=i;
		while(k<=n){
			ans[a[k]]++;
			if(b[a[k]]>k){
				k=b[a[k]]+1;
			}
			else k++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
