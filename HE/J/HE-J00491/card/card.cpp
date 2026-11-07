#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
const int N=2e5+100;
int a[N];
map<int,int> mp; 
int cnt=0;
int b[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int k=1;k<=n;k++){
		cnt=0;
		for(int i=k;i<=n;i++){
			b[++cnt]=a[i];
			for(int j=1;j<cnt;j++){
				if(b[j]==a[i]){
					cnt=j;
					break;
				}
			}
		}
		for(int i=1;i<=cnt;i++) mp[b[i]]++;		
	}
	for(int i=1;i<=m;i++){
		cout<<mp[i]<<" ";
	}
	return 0;
}

