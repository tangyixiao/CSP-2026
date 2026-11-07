#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N],a1[N],c1[N],c[N],s[N],n,len,cnt;
int sear(int x){
	int l=1,r=cnt,mid;
	while(l<=r){
		mid=(l+r)>>1;
		if(s[mid]>=x) r=mid-1;
		else l=mid+1;
	}
	return r+1;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a1[i];
		len+=a1[i];
		char t;
		cin>>t;
		c1[i]=t-'A'+1;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		cnt++;
		c[cnt]=c1[i];
		while(j<=n&&c1[j]==c1[i]) a[cnt]+=a1[j],j++;
		j--;
		i=j;
		s[cnt]=s[cnt-1]+a[cnt]; 
//		cout<<a[cnt]<<","<<(char)(c[cnt]+'A'-1)<<"\n";
	}
	int L,R,l,r;
	if(len%2) L=R=len/2;
	else L=len/2-1,R=len/2;
	L++,R++;
	l=sear(L),r=sear(R);
	int ans=0;
//	cout<<L<<"("<<l<<"),"<<R<<"("<<r<<")\n";
	while(L>=1&&R<=len){
		int id1=L-s[l-1]-1,id2=s[r]-R;
		int id=min(id1,id2);
		id++;
		if(c[l]!=c[r]){
			ans+=id;
//			cout<<"&"<<id<<"\n";
		}
		L-=id,R+=id;
		l=sear(L),r=sear(R);
//		cout<<"*"<<id1<<","<<id2<<"\n";
//		cout<<L<<"("<<l<<"),"<<R<<"("<<r<<")\n";
	}
	cout<<ans;
	return 0;
}