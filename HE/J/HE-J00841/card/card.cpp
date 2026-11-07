#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=6e5+50; 
ll n,m;
ll a[N];
ll ans[N];
ll top;
map<ll,ll> vis,la;
ll ss[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}	
	for(int i=1;i<=n;i++){
		top=1;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]=1;
				ss[top++]=a[j];
				la[a[j]]=top-1;
			}
			else{
				int ii=0;
				for(int k=la[a[j]];k<top;k++){
//					cout<<ss[k]<<" ";
					if(ss[k]==a[j]){
						ii=k;
					}
					vis[ss[k]]=0;la[ss[k]]=0;
				}
//				cout<<"***\n";
				top=ii+1;vis[a[j]]=1;la[a[j]]=ii;
//				cout<<a[j]<<" "<<top<<"\n";
			}
		}
//		cout<<top<<"\n";
		for(int j=1;j<top;j++){
//			cout<<ss[j]<<" ";
			ans[ss[j]]++;
		}
//		cout<<"&&&\n";
		vis.clear();la.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3

*/
