#include<bits/stdc++.h>
using namespace std;
int a[2000005];
int n,m,add=-1e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	int maxx=-1e9,ans=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		maxx=max(a[i],maxx);
	}
	ans=a[1];
	if(m==1){
		cout << maxx;
	}else if(m==n){
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout << ans;
	}else if(m==2){
		int r=-1e9;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i)r=max(a[i]&a[j],r);
				
			}
		}
		cout << r;
	}
	return 0; 
} 
