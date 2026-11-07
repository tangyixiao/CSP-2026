#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,a[N],num[N],ans;
bool f(int n,int k){return n&(1<<k);}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=31;j++) if(f(a[i],j)) num[j]++;
	}
	for(int i=31;i>=0;i--){
		if(num[i]<m) continue;
		for(int j=1;j<=n;j++){
			if(!f(a[j],i)&&a[j]!=0){
				for(int k=0;k<=31;k++){
					if(f(a[j],k)){
						num[k]--;
					}
				}
				a[j]=0;
			}
		}
		ans+=(1<<i);
	}
	cout<<ans;
	return 0;
} 