#include<bits/stdc++.h>
using namespace std;
const int N=200100;
int n,m,a[N],res;
int main(){
	freopen("and.in","r",stdin),freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=30,c;i>=0;i--){
		res^=(1<<i),c=0;
		for(int j=1;j<=n;j++) c+=((a[j]&res)==res);
		if(c<m) res^=(1<<i);
	}
	return cout<<res<<'\n',0;
}