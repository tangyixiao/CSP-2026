#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
int n;
ll ans=0,l=1,r=0;
struct ty{
	ll cnt;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].cnt >> a[i].c;
	}
	r=n;
	int li=1,ri=n;
	while(l<=r){
		if(li==ri)break;
		int len=min(a[li].cnt,a[ri].cnt);
		if(a[li].c==a[ri].c){
			r-=len;
			l+=len;
		}else{
			ans+=len;
			r-=len;
			l+=len;
		}
		a[li].cnt-=len;
		a[ri].cnt-=len;
		if(a[li].cnt==0){
			li++;
		}
		if(a[ri].cnt==0){
			ri--;
		}
	}
	cout << ans;

}
