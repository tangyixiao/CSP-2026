#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 5e5 + 5;
const ll M = 3e5+ 5;
ll n,m,a[N],t[M];
bool p[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	for(ll i=1;i<N-1;i++)p[i]=0;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	for(ll i=n;i>=1;i--){
		//if(i==n)t[a[i]]++;
		bool tx=0;
		stack<ll>st,ts;
		if(p[a[i]]==1)tx=1;
		p[a[i]]=1;
		st.push(a[i]),ts.push(a[i]);
		if(tx==1){
			//st.pop(),ts.pop();
			while(st.top()!=a[i]){ll x=st.top();st.pop(),ts.pop();p[x]=0;}
		}
		for(ll j=0;j<st.size();j++){
			ll x=ts.top();
			t[x]++;
			ts.pop();
		}
		ts=st;
	}
	for(ll i=1;i<=m;i++)cout<<t[i]<<" ";
	cout<<endl; 
	return 0;
} 
