#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int t[M],ped[M],ans[M];
int a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]++,ped[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(i==ped[a[i]]) {
			ans[a[i]]+=t[a[i]];
			ans[a[ped[a[i+1]]]]+=ans[a[i]];
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}