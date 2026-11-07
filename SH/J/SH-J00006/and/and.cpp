#include<bits/stdc++.h>
using namespace std;
int lowbit(int n){
	int ans=0,m;
	m=n&-n;
	while(m>1){
		m/=2;
		ans++;
	}
	return ans;
}
int n,m,a[200005],ans,js[35];
bool flag[200005][35],bj[200005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int j;
		cin>>a[i];
		j=a[i];
		while(j>0){
			int u=lowbit(j);
			flag[a[i]][u]=true;
			js[u]++;
			j-=j&-j;
		}
	}
	for(int i=30;i>=0;i--){
		if(js[i]>=m){
			ans+=pow(2,i);
			for(int j=1;j<=n;j++){
				if(!flag[a[j]][i]&&!bj[j]){
					bj[j]=true;
					int k=a[j];
					while(k>0){
						js[lowbit(k)]--;
						k-=k&-k;
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
