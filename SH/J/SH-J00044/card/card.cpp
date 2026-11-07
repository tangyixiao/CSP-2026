#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[500009];
ll cnt[300009];
ll desk[300009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ll cur=0;
	for(int i=1;i<=n;i++){
		cur=0;
		for(int j=i;j<=n;j++){
			bool f=0;
			for(int k=1;k<=cur;k++){
				if(desk[k]==a[j]){
					f=1;
				}
				if(f)desk[k]=0; 
			}
			desk[++cur]=a[j];
		}
		for(int j=1;j<=cur;j++){
			cnt[desk[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
