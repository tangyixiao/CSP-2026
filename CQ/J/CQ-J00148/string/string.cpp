#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,ans;
struct node{
	int a;
	char c;
}x[N];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i].a>>x[i].c;
	int l=1,r=n;
	while(l<r){
		if(x[l].c!=x[r].c){
			if(x[l].a>x[r].a){
				ans+=x[r].a;
				x[l].a-=x[r].a;
				r--;
			}
			else if(x[l].a<x[r].a){
				ans+=x[l].a;
				x[r].a-=x[l].a;
				l++;
			}
			else{
				ans+=x[l].a;
				l++,r--;
			}
		}
		else{
			if(x[l].a>x[r].a){
				x[l].a-=x[r].a;
				r--;
			}
			else if(x[l].a<x[r].a){
				x[r].a-=x[l].a;
				l++;
			}
			else l++,r--;
		}
	}
	cout<<ans;
}
signed main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T=1;
//	cin>>T;
	while(T--) solve();

	return 0;
}

