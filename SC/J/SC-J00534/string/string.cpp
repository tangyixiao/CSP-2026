#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int a[200010];
char b[200010];
int n;
int fz(int x){
	return n-x+1;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int ans=0;
	int wz=0;
	int q=1,h=1,qz=0,hz=0;
	while(q<=n && h<=n){
		if(b[q]==b[fz(h)]){
			if(qz+a[q]>hz+a[fz(h)]){
				hz+=a[fz(h)];
				h++;
			}else{
				qz+=a[q];
				q++;
			}
		}else{
			if(qz+a[q]>hz+a[fz(h)]){
				ans+=hz+a[fz(h)]-max(qz,hz);
				hz+=a[fz(h)];
				h++;
			}else{
				ans+=qz+a[q]-max(qz,hz);
				qz+=a[q]; 
				q++;
			}
		}
	}
	cout<<ans/2;
	return 0;
}