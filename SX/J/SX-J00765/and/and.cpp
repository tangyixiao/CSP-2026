#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=200005;
int a[maxn],n,m,s,tmp,x;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=31;j>=0;j--){
		s=0;
		x=(1<<j)|tmp;
		for(int i=1;i<=n;i++){
			if((a[i]&x)==x){
				s++;
			}
		}
		if(s>=m)tmp|=x;
	}
	cout<<tmp<<'\n';
	return 0;
}