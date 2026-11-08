#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=3e5+6;
int n,m,a[N],d,e,k=32,zzs;
int id=1,j;
int t[36],w[36],yly;
signed main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	w[1]=1;
	for(int i=2;i<=32;i++) w[i]=w[i-1]*2;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(k){
		j++;
		for(int i=1;i<=32;i++) t[i]=0;
		t[0]=m+1;
		for(int i=1;i<=n;i++){
			d=a[i],e=1;
			if(d>=yly)
				while(d) t[e]+=(d&1),d>>=1,e++;
		}
		for(int i=k-1;i>=0;i--)
			if(t[i]>=m){
				k=i,yly+=w[k];
				break;
			}
	}
	cout<<yly;
	return 0;
}
