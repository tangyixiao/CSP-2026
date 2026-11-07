#include<bits/stdc++.h>
#define innt long long
using namespace std;
const int M=3e5+1;
int ma[M],mb[M],a,b,cnt=0,smax;
bool s=0,l=0;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	if(n==m) s=1;
	for(int i=1;i<=n;i++){
		cin>>a;ma[a]++;mb[a]=i;
		if(i==1) smax=a;
		if(i==n) b=a;
		if(a<smax) l=1;
	}
	if(s==1||l==0){
		for(int i=1;i<=m;i++){
			cout<<mb[i]<<" ";
		}
		return 0;
	}
	if(m<=2){
		if(m==1){
			cout<<n;return 0;
		}
		for(int i=1;i<=m;i++){
			if(i==b) cout<<n<<" ";
			else cout<<1<<" ";
		}
	}
	for(int i=1;i<=m;i++){
		if(i==b) cout<<n<<" ";
		else{
			cnt=1;
			while(ma[i]>=2){
				cnt+=2;ma[i]/=2;
			}
			cout<<cnt<<" ";
		}
	}
	return 0;
}
