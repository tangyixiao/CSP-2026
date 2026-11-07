#include<bits/stdc++.h>
#define int long long

using namespace std;
const int N=5e5+10;

int n,m;
int lst[N];
int a[N];
int ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]<a[i-1]) f=0;
		lst[a[i]]=i;
	}if(f){
		for(int i=1;i<=n;i++){
			if(lst[a[i]]==i) ans[a[i]]+=i;
		}
	}
	else{
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;){
				ans[a[j]]++;
				j=lst[a[j]]+1;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
