#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
const int N2=3e5+5;
int n,m,a[N],b[N],t[N2];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int T=n;
	while(T--){//第n-T局
		int I=n-T;
		for(int i=I;i<=n;i++){
			b[i]=a[i];
		}
		for(int i=I;i<=n;i++){
			for(int j=I;j<i;j++){
				if(b[j]==b[i]){
					for(int x=j;x<i;x++){
						b[x]=0;
					}
				}
			}
		}
		sort(b+I,b+n+1);
		for(int i=n;i>=I;i--){
			if(b[i]<1)break;
			t[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}