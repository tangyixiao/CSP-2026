#include<bits/stdc++.h>
#define int long long
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
char ch[410000];
signed main(){
	ios::sync_with_stdio(0);
	cout.tie(0);cout.tie(0);
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
	}int l=1,r=n;
	int za,zb;
	int ans=0;
	while(l<=r){
		za=a[l];
		zb=a[r];
		if(ch[l]==ch[r]){
			a[l]-=zb;
			a[r]-=za;
			if(a[l]<=0){
				l++;
			}if(a[r]<=0){
				r--;
			}
		}else{
			ans+=min(a[l],a[r]);
			a[l]-=zb;
			a[r]-=za;
			if(a[l]<=0){
				l++;
			}if(a[r]<=0){
				r--;
			}
		}
	}cout<<ans<<"\n";
	return 0;
}/*

*/

