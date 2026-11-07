#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
long long n,a[N],ans[N],m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		ans[i]+=ans[i-1];
		cout<<ans[i]<<" ";
	}
	return 0;
}
