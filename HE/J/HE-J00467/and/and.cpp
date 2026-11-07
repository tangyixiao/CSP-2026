#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*10e5;
//const int N=2*10e5;
int n,m,a[N],ans,flflyflf;
string s[N],t;
int er(int x){
	int i=1;
	while(x){
		t[i]=x%2;
		i++;
		x-=x%2;
		x/=2;
	}return 0;
}signed main(){
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin>>n>>m;
	//er(n);
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}for(int i=1;i<=m;i++){
		ans+=a[i];
	}cout<<ans;
	return 0;
}
