#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll vis[3*100000+5];
ll dis[3*100000+5];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//100:记忆化
	//46:模拟
	ll n,m;
	cin>>n>>m;
	vector<ll> a(n+1);
	vector<ll> b(m+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	ll s=1;
	vector<ll> qe(1);
	while(s<=n){
		qe.resize(1);
		for(ll i=s;i<=n;i++){
			if(vis[a[i]]!=0){
//				cout<<"c"<<(qe.size()-1<=vis[a[i]])<<endl;
				while(qe.size()-1>vis[a[i]]){
					vis[qe[qe.size()-1]]=0;
//					cout<<"pop"<<qe[qe.size()-1]<<endl;
					qe.pop_back();
				}
				vis[a[i]]=qe.size()-1;
			}else{
				qe.push_back(a[i]);
				vis[a[i]]=qe.size()-1;
			}
		}
		for(ll i=1;i<=qe.size()-1;i++){
//			cout<<qe[i]<<' ';
			dis[qe[i]]++;
		}
		s++;
//		cout<<endl;
		memset(vis,0,3*100000+5);
	}
	for(ll i=1;i<=m;i++){
		cout<<dis[i]<<' ';
	}
	return 0;
}