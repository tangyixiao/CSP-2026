#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n;
long long m,a[N],ans;
int main(){
	freopen("and.in","r",stdin); 
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=30;i>=0;--i){
		long long t=ans|(1<<i),c=0;
		for(int i=1;i<=n;++i)
			if((a[i]&t)==t)++c;
		if(c>=m)ans=t;
	}
	cout<<ans;
	return 0;
}
