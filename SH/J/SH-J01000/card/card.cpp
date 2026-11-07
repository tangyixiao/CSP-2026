#include<bits/stdc++.h>
using namespace std;
long long n,m;
int a[500005];
int an[500005];
int cxg[300005];
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (cxg[a[i]]>0){
			an[cxg[a[i]]]=i;
		}
		cxg[a[i]]=i;
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			while(an[j]>0) j=an[j];
			cnt[a[j]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
