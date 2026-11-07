#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n;
int len;
int a[N];
char c[N];
int getnum(int l,char x){
	int i=1;
	int ll=0;
	int cnt=0;
	while(ll<=l){
		ll+=a[i];
		if(c[i]==x){
			if(ll>l){
				cnt-=ll-l;
			}
			cnt+=a[i];
		}
		i++;
	}
	return cnt;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	int mid=len/2+1;
	int l=1;
	int i=1;
	int ans=0;
	int net=getnum(n,c[1]);
	while(l<mid){
		int lx=l+a[i]-1;
//		if(lx>=mid){
//			lx=mid-1;
//			sum=lx-l;
//		}
		int r=len+1-lx;
		int rx=len+1-l;
		int cnt=getnum(rx,c[i])-getnum(r-1,c[i]);
		ans+=a[i]-cnt;
		l+=a[i];
		i++;
//		if(l>=mid-1){
//			break;
//		}
	}
	cout<<ans;
	return 0;
}
/*
3
1 a
3 c
2 a
*/