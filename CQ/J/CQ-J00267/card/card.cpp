#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[500005];
int lastt[300005];
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++) lastt[a[i]]=i;
	for(int i=1;i<=n;i++){
		int t=i;
		while(t<=n){
			if(lastt[a[t]]==t){
				cnt[a[t]]++;
				t++;
			}else{
				t=lastt[a[t]];
				cnt[a[t]]++;
				t++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
