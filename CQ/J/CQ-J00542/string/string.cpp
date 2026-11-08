#include<bits/stdc++.h>
using namespace std;
long long sml[500005],smr[500005];
struct asd{
	long long x;
	char c;
}a[500005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,ans=0;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		sum+=a[i].x;sml[i]=sml[i-1]+a[i].x;
	}
	for(int i=n;i>0;i--){
		smr[i]=smr[i+1]+a[i].x;
	}
	long long l=1,r=n,len=0;
	for(;l<r;){
		long long top1=sml[l]-len,top2=smr[r]-len,res=0,op=0;
		if(a[l].c!=a[r].c)op=1;
		if(top1<top2){
			res=top1;
			l++;
		}
		if(top1>top2){
			res=top2;
			r--;
		}
		if(top1==top2)l++,r--,res=top1;
		ans+=(res*op);
		len+=res;
	}
	cout<<ans;
	return 0;
}
