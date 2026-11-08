#include<bits/stdc++.h>
#define Is_inky_ya ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sofree freopen("string.in","r",stdin);freopen("string.out","w",stdout);
#define endl '\n'
using namespace std;
using lint = long long ;
using doubao = long double;
const lint N = 2e5+5; 
lint n;
struct node{
	lint l,r;
	char c;
}a[N];
int main(){
#ifndef AKIOI
	Is_inky_ya
#endif
	sofree
	cin>>n;
	lint lst = 1;
	for(lint i=1;i<=n;i++){
		lint u;
		char c;
		cin>>u>>c;
		a[i] = {lst,lst+u-1,c};
		lst+=u;
	}
	lint l = 1,r = n;
	lint anr = a[n].r;
	lint ans = 0;
	while(l<=r){
		lint ll = anr-a[l].r+1;
		lint lr = anr-a[l].l+1;
		lint rl = a[r].l;
		lint rr = a[r].r;
//		cout<<l<<" "<<r<<" "<<a[l].l<<" "<<a[l].r<<" "<<ll<<" "<<lr<<" "<<rl<<" "<<rr<<endl;
		if(rl>ll){
			if(a[l].c!=a[r].c){
				ans+=(rr-rl+1);
			}
			a[l].l = a[l].l+(rr-rl+1);
			r--;
		}else if(rl<ll){
			if(a[l].c!=a[r].c){
				ans+=(lr-ll+1);
			}
			a[r].r = a[r].r-(lr-ll+1);
			l++;
		}else{
			if(a[l].c!=a[r].c){
				ans+=(rr-rl+1);
			}
			l++;
			r--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
3
2 a
2 b
1 c
*/

