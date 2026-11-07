#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5;
int a[N+2];
bool out[N+2];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int ly=29;ly>=0;ly--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(!out[i]&&a[i]&(1<<ly)) cnt++;
		}
		if(cnt>=m){
			ans|=(1<<ly);
			for(int i=1;i<=n;i++){
				if(!out[i]&&!(a[i]&(1<<ly))) out[i]=1;
			}
		} 
	}
	cout<<ans;
	return 0;
} 