#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	//cout<<endl;
	//ans=a[1];
	//for(int i=2;i<=m;i++) ans&=a[i];
	//cout<<ans;
	cout<<a[m];
	return 0;
}

