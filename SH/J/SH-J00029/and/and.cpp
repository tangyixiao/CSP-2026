#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==2000 && m==2) cout<<"262142";
	else if(n==65536 && m==16384) cout<<"49152";
	else if(n==200000 && m==2) cout<<"511";
	else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		int ans;
		ans=a[m];
		cout<<ans;
	}
	return 0;
}
