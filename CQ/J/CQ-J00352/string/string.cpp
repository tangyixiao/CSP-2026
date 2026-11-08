#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[220000];
char p[220000];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,now=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>p[i];
		now+=a[i]; 
	}
	int l=now/2,r=now/2+1,il=0,ir=0,le=0,re=0;
	if(now%2==1)l++;
	int np=0;
	for(int i=1;i<=n;i++){
		np+=a[i];
	//	cout<<np<<" "<<l<<" "<<r<<endl;
		if(np>=l&&il==0)il=i,le=l-(np-a[i]);
		if(np>=r&&ir==0)ir=i,re=np-r+1;
	}
	int ans=0;
	while(1){
		int fg=min(le,re);
	//	cout<<il<<" "<<ir<<endl;
		if(p[il]!=p[ir]){
			ans+=fg;
		}
		le-=fg,re-=fg;
		if(le==0){
			if(il==1)break;
			il--,le=a[il];
		}
		if(re==0){
			if(ir==n)break;
			ir++,re=a[ir];
		}
	}
	cout<<ans;
	return 0;
} 
