#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
struct node{
	char c;
	ll cnt;
};
ll n,a[N],len;
char c[N];
ll lf[N],rt[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		len += a[i];
	}
	ll mid = len / 2,l = 1,r = n;
	deque<node> lq;
	deque<node> rq;
	while(mid >= a[l]){
		mid -= a[l];
		lq.push_back({c[l],a[l]});l++;
	}
	if(mid > 0){
		lq.push_back({c[l],mid});
	}
	mid = len / 2;
	while(mid >= a[r]){
		mid -= a[r];
		rq.push_back({c[r],a[r]});r--;
	}
	if(mid > 0){
		rq.push_back({c[r],mid});
	}
	ll ans = 0;
	
	while(!lq.empty() && !rq.empty()){
		node t1 = lq.front(),t2 = rq.front();
		if(t1.c == t2.c){
			if(t1.cnt > t2.cnt){
				rq.pop_front();
				lq[0].cnt -= t2.cnt;
			}else if(t1.cnt < t2.cnt){
				lq.pop_front();
				rq[0].cnt -= t1.cnt;
			}else lq.pop_front(),rq.pop_front(); 
		}else{
			ans += min(t1.cnt,t2.cnt);
			if(t1.cnt > t2.cnt){
				rq.pop_front();
				lq[0].cnt -= t2.cnt;
			}else if(t1.cnt < t2.cnt){
				lq.pop_front();
				rq[0].cnt -= t1.cnt;
			}else lq.pop_front(),rq.pop_front(); 
		}
	}
	cout << ans;
	return 0;
}