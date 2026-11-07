#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000000];
int b[1000000];
int t[1000000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int z=0;
		for(int j=1;j<=n;j++){
			b[j]=0;
		}
		for(int j=i;j<=n;j++){
			bool f=true;
			int k1;
			for(int k=1;k<=n-k+1;k++){
				if(b[k]==a[j]){
					f=false;
					k1=k;
				}
			}
			if(f){
				b[++z]=a[j];
			}
			else{
				for(int x=k1+1;x<=z;x++){
					b[x]=0;
				}
				z=k1;
			}
		}
		for(int j=1;j<=z;j++){
			t[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
}