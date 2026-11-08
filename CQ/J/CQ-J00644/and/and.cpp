#include<bits/stdc++.h>
//#define int long long
//#define pii pair<int,int>
//#define pb push_back
//#define mr make_pair
//#define fi first
//#define se second
//#define grt greater
//#define p_queue priority_queue
//#define ep empty
//#define vec vector
//#define fr front
//#define pp pop_back
using namespace std;
int a[410000];
int n,m;
int ans=0;
//int ef(){
//	int l=1,r=n;
//	int mid;
//	while(l<=r){
//		mid=(l+r)>>1;
//		if(a[mid]<ans){
//			l=mid+1;
//		}else{
//			r=mid-1;
//		}
//	}return l;
//}
int b[410000][4];
int w;
signed main(){//ac
	ios::sync_with_stdio(0);
	cout.tie(0);cout.tie(0);
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}//sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		b[i][0]=a[i];
	}int oi=w^1;
	b[0][0]=n;
	int to;
	for(int j=31;j>=0;j--){
		oi=w^1;
		int zs=b[0][w];
		b[0][oi]=0;
		for(int i=1;i<=zs;i++){
			if((b[i][w]>>j)&1){
				b[++b[0][oi]][oi]=b[i][w];
			}
		}if(b[0][oi]<m){
			for(int i=1;i<=zs;i++){
				if(!((b[i][w]>>j)&1)){
					b[++b[0][oi]][oi]=b[i][w];
				}
			}
		}else{
			ans^=(1<<j);
		}
		w^=1;
	}cout<<ans<<"\n";
	return 0;
}/*

*/

