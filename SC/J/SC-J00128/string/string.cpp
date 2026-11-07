#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define pic pair<int,char>
const int N=2e5+10;
int n,x,l,cnt,L=1,R;
char lc,c;
pic h[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		if(c==lc){
			h[l].first+=x;
		}
		else{
			h[++l]={x,c};
		}
	}
	R=l;
	while(L<=R){
		if(h[L].first==h[R].first){
			if(h[L].second!=h[R].second){
				cnt+=h[L].first;
			}
			L++,R--;
		}
		else{
			if(h[L].second==h[R].second){
				if(h[L].first>h[R].first){
					h[L].first-=h[R].first;
					R--;
				}
				else{
					h[R].first-=h[L].first;
					L++;
				}
			}
			else{
				if(h[L].first>h[R].first){
					h[L].first-=h[R].first;
					cnt+=h[R].first;
					R--;
				}
				else{
					h[R].first-=h[L].first;
					cnt+=h[L].first;
					L++;
				}
			}
		}
	}
	cout<<cnt;
	return 0;
}