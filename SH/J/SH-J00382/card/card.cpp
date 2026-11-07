#include<bits/stdc++.h>
using namespace std;
int a[500001],play[500001],cnt[500001];
int total,last;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		last=0;
		for(int j=i;j<=n;j++){
			last++;
			play[last]=a[j];
			for(int k=1;k<=last;k++)
				if(play[k]==a[j])last=k;
		}
		for(int i=1;i<=last;i++)cnt[play[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}
