#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
char c;
struct S{
	char a;
	int v;
}m[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>m[i].v>>m[i].a;
	}
	int l=1,r=n;
	while(l<r){
		if(m[l].v > m[r].v){
			if(m[l].a==m[r].a) {
				m[l].v-=m[r].v;
				r--;
				continue;
			}
			ans += m[r].v;
			m[l].v-=m[r].v;
			r--;
		}
		else if(m[l].v<m[r].v){
			if(m[l].a==m[r].a) {
				m[r].v-=m[l].v;
				l++;
				continue;
			}
			ans += m[l].v;
			m[r].v-=m[l].v;
			l++;
		}
		else{
			if(m[l].a==m[r].a){
				l++;
				r--;
				continue;
			}
			ans += m[l].v;
			l++;
			r--;
		}
	}
	cout << ans <<"\n";
}