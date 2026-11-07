#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=5e5+100;
ll n,m,a[N],b[N],ans[N],A=0;
stack <ll> s;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	std::cin.tie(nullptr)->std::ios::sync_with_stdio(false);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(i!=1&&a[i]<a[i-1]){
			A=1;
		}
	}
	if(A==0){
		for(ll i=1;i<=n;i++){
			ans[a[i]]++;
		}
		for(ll i=1;i<=m;i++){
			if(i!=1){
				ans[i]=ans[i-1]+ans[i];
			}
			cout<<ans[i];
			if(i!=m){
				cout<<' ';
			}
		}
		return 0;
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			b[j]=0;
		}
		for(ll j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]++;
				s.push(a[j]);
			}
			else{
				while(!s.empty()&&s.top()!=a[j]){
					b[s.top()]--;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m){
			cout<<' ';
		}
	}
	return 0;
}
