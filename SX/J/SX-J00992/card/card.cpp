#include<bits/stdc++.h>
using namespace std;
int h[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(h[i]>h[i-1]) cnt++;
	}
	if(cnt==n){
		for(int i=1;i<=m;i++){
			if(i==m) cout<<n<<" ";
			else cout<<0<<" ";
		}
		return 0;
	}
	return 0;
}