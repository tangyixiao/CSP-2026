#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200010],c[100];
bool hpc[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if(a[i]&(1<<j))c[j]++;
		}
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		if(c[i]<m)continue;
		ans+=(1<<i);
		for(int j=1;j<=n;j++){
			if(hpc[j])continue;
			if(!(a[j]&(1<<i))){
				hpc[j]=1;
				for(int x=0;x<=30;x++){
					if(a[j]&(1<<x))c[x]--;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/
