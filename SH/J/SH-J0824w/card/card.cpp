#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N],b[N],c[N];
int n,m;
void kp(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i]==c[j]){
				for(int k=j;k<=n;k++){
					c[k]=0;
				}
			}
		}
		c[i]=b[i];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int x=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	unique(a+1,a+n+1);
	while(n--){
		kp();
		for(int i=1;i<n;i++){
			b[i]=b[i+1];
		}
	}
	for(int i=1;i<=m;i++){
		int ans=0;
		for(int j=1;j<=x;j++){
			if(a[i]==c[j]){
				ans++;
			}
		}
		if(i==1) cout<<ans;
		else cout<<' '<<ans;
	}
	return 0;
}
