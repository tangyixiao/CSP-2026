#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005];
vector<int>v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]].push_back(i);
		cnt[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int l=v[a[i]].size();
		if(l>1)for(int j=0;j<l;j+=2)for(int k=v[a[i]][j]+1;k<v[a[i]][j+1];k++)if(v[a[i]][j]>i-1)cnt[a[k]]--;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
