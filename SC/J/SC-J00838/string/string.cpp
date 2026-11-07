#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],ans,zz,zq,le[100005],ri[100005];
char c[200005],lc[100005],rc[100005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
		cin >> c[i];
		ans+=a[i]; 
	}
	int l=1,r=n,lj=0,rj=ans+1,zq,zz;
	zz=ans/2;
	if (ans%2==1){
		zq=zz+2;
	}else{
		zq=zz+1;
	}
	while(1){
		lj+=a[l];
		if (lj<zz){
			lc[l]=c[l];
			le[l]=a[l];
		}else{
			lj-=a[l];
			lc[l]=c[l];
			le[l]=zz-lj;
			break;
		}
		l++; 
	}
	while(1){
		int x=n-r+1;
		rj-=a[r];
		if (rj>zq){
			rc[x]=c[r];
			ri[x]=a[r];
		}else{
			rj+=a[r];
			rc[x]=c[r];
			ri[x]=rj-zq;
			break;
		} 
		r--;
	}
//	int x=n-r+1;
//	for (int i = 1;i <= l;i++){
//		cout << le[i] << " " << lc[i];
//		cout << '\n';
//	}
//	cout << "----------------------\n";
//	for (int i = 1;i <= x;i++){
//		cout << ri[i] << " " << rc[i];
//		cout << '\n';
//	}
	int j=1;
	ans=ans/2;
	for (int i = 1;i <= l;i++){
		while(j){
//			if ()
			int qy=min(le[i],ri[j]);
			if (lc[i]==rc[j]){
				ans-=qy;
			}
			le[i]-=qy;
			ri[j]-=qy;
			if (ri[j]==0) j++;
			if (le[i]==0) break;
		}
	}
	cout << ans;
	return 0;
}
//2
//2 a
//3 a

//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b

//3
//1 a
//3 b
//2 a
//abbbaa