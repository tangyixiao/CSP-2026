#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
bool f;
int a[200010];
bool mp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1) f=true;
	}
	sort(a+1,a+1+n,mp);
	if(f==true){
		cout<<a[m];
		return 0;
	}

}
