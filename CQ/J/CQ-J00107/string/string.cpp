#include<bits/stdc++.h> 
#define int long long
using namespace std;
int n,ans,a[200005],pos,l_pos,r_pos;
char c[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l_pos=1,r_pos=n;
	while(l_pos<r_pos){
		int f=min(a[l_pos],a[r_pos]);
		if(c[l_pos]!=c[r_pos]){
			ans+=f;
		}
		a[l_pos]-=f;
		a[r_pos]-=f;
		if(!a[l_pos]) l_pos++;
		if(!a[r_pos]) r_pos--;
	}
	cout<<ans;
	return 0;
} 
