#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int ans,a[N],n,m;
int q1[N],q2[N],e1,e2;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)cin >> a[i],q1[++ e1] = a[i];
	for(int j = 30;j >= 0;j --){
		int num = 0;
		for(int i = 1;i <= e1;i ++){
			if(q1[i] & (1ll << j))num ++;
		}
		if(num >= m){
			while(e1){
				if(q1[e1] & (1ll << j))q2[++ e2] = q1[e1 --];
				else e1 --;
			}
			while(e2){
				q1[++ e1] = q2[e2 --];
			}
			ans += (1ll << j);
		}
	}
	cout << ans;
	return 0;
}
