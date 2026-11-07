#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll n,l,ans,cnt1,cnt2;
struct node{
	ll l;
	char r;
};
stack<node> st1,st2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	vector<node> a(n+5);
	for(ll i=1;i<=n;i++){
		cin>>a[i].l>>a[i].r;
		l+=a[i].l;
	}
	for(ll i=1;i<=n;i++){
		if(cnt1>=l/2){
			break;
		}
		if(cnt1+a[i].l>l/2){
			st1.push({l/2-cnt1,a[i].r});
			break;
		}
		st1.push({a[i].l,a[i].r});
		cnt1+=a[i].l;
	}
	for(ll i=n;i>=1;i--){
		if(cnt2>=l/2){
			break;
		}
		if(cnt2+a[i].l>l/2){
			st2.push({l/2-cnt2,a[i].r});
			break;
		}
		st2.push({a[i].l,a[i].r});
		cnt2+=a[i].l;
	}
	while(st1.size()!=0){
		node x=st1.top();
		st1.pop();
		ll cnt3=0;
		while(st2.size()!=0){
			if(cnt3>=x.l){
				break;
			}
			node y=st2.top();
			st2.pop();
			if(cnt3+y.l>x.l){
				st2.push({cnt3+y.l-x.l,y.r});
				y.l=x.l-cnt3;
			}
			if(x.r!=y.r){
				ans+=y.l;
			}
			cnt3+=y.l;
		}
	}
	cout<<ans;
	return 0;
}