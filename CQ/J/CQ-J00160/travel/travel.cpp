#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		ans[1]=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			ans[2]=1;
			if(b[2]>='D'&&d[2]>='D'){
				ans[3]=1;
				ans[4]=1;
			}if(b[2]<'D'&&d[2]<'D'){
				ans[3]=1;
				if(abs(b[2]-d[2])==1) ans[4]=1;
			}
		}
	}for(ll i=1;i<=4;i++) cout<<ans[i];
	return 0;
}
