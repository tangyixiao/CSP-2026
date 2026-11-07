#include<bits/stdc++.h>
using namespace std;
int a[500005],cnt[300005],last[300005];
bool b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(b[a[i]]==0){
			last[a[i]]=i;
			b[a[i]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		int now=i;
		while(now<=n){
			if(last[a[now]]>now) now=last[a[now]];
			cnt[a[now]]++;
			now++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}