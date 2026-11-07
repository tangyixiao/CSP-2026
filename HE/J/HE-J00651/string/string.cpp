#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
struct awa{
	ll x;
	char c;
}a[N];
ll n,sumx,cnt,pre;
string s;
bool p,p2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){cout<<0;return 0;}
	if(n<=1e3){
		for(ll i=1;i<=n;i++){
			ll z;
			char h;
			cin>>z>>h;
			for(ll i=1;i<=z;i++)s+=h;
		}
		ll i=0,j=s.size()-1;
		while(i<=j){
			if(s[i]!=s[j])cnt++;
			i++;
			j--;
		}
		cout<<cnt<<endl;
		return 0;
	}
	else{
		for(ll i=1;i<=n;i++){
			cin>>a[i].x>>a[i].c;
			sumx+=a[i].x;
			if(a[i].x!=1)p=0;
			if(a[i].x>=50)p1=0;
		}
		if(p==1||p1==1){
			for(ll i=1;i<=n;i++){
				for(ll i=1;i<=a[i].x;i++)s+=a[i].c;
			}
			ll i=0,j=s.size()-1;
			while(i<=j){
				if(s[i]!=s[j])cnt++;
				i++;
				j--;
			}
			cout<<cnt<<endl;
			return 0;
		}
		ll i=1,j=sumx;
		while(i<=j){
			if(a[i].c!=a[j].c)pre=a[i].x-a[j].x;
			cnt+=pre;
			i++;
			j--;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
