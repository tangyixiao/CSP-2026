#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[200010];
char c[200010];
ll cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt = cnt+a[i];
	}
	ll mid;
	if(cnt%2==1){
		mid = (cnt-1)>>1;
	}else{
		mid = cnt>>1;
	}
	ll sum = 0;
	ll l = 1,s = 1,r = 1,v = n,num = 1;//l = 第几个s = 第几组
	while(num<=mid){
		if(c[s]!=c[v]){
			sum++;
		}
		l++;
		r++;
		num++;
		if(l>a[s]){
			l = 1;
			s++;
		}
		if(r>a[v]){
			r = 1;
			v--;
		}
	}
	cout<<sum;
	return 0;
}