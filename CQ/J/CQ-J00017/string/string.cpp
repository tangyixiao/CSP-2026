#include<bits/stdc++.h>
using namespace std;
#define int long long
int res1,res2,s,ss,l,n,ll,rr,a[200005],mid,ld,rd,ls,rs,lft;
char c[200005];
int suml[200005],sumr[200005];
struct node{
	int z;
	char c;
};
node lf[200005],rt[200005];
int solve(){
	int ans=0;
	while(ls<ll&&rs<rr){
		if(ld<=rd){
			ld+=lf[++ls].z;
			if(lf[ls].c!=rt[rs].c){
				if(ld<rd)ans+=lf[ls].z;
				else ans+=sumr[rs]-lft;
			}
			lft=min(sumr[rs],ld);
		}else{
			rd+=rt[++rs].z;
			if(lf[ls].c!=rt[rs].c){
				if(ld<rd)ans+=rt[rs].z;
				else ans+=suml[ls]-lft;
			}
			lft=min(suml[ls],rd);
		}
	}
	if(ls<ll)if(lf[ls+1].c!=rt[rr].c)ans+=suml[ls+1]-lft;
	if(rs<rr)if(rt[rs+1].c!=lf[ll].c)ans+=sumr[rs+1]-lft;
	for(int i=ls+2;i<=ll;i++){
		if(lf[i].c!=rt[rr].c)ans+=lf[i].z;
	}
	for(int i=rs+2;i<=rr;i++){
		if(rt[i].c!=lf[ll].c)ans+=rt[i].z;
	}
	return ans;
}
void slove2(){
	string k;int ans=0;
	for(int i=1;i<=n;i++){
		while(a[i]--)k+=c[i];
	}
	k=" "+k;
	for(int i=1;i<=l/2;i++){
		if(k[i]!=k[l-i+1])ans++;
	}
	cout<<ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	if(l<=10000000){
		slove2();
		return 0;
	}
	mid=l>>1;
	while(s+a[ll+1]<=mid){
		s+=a[++ll];
		lf[ll]={a[ll],c[ll]};
	}
	for(int i=n;i>=ll+2;i--){
		rt[++rr]={a[i],c[i]};
		ss+=a[i];
	}
	if(mid-ss!=0)rt[++rr]={mid-ss,c[ll+1]};
	if(mid-s!=0)lf[++ll]={mid-s,c[ll]};
	for(int i=1;i<=ll;i++)suml[i]=suml[i-1]+lf[i].z;
	for(int i=1;i<=rr;i++)sumr[i]=sumr[i-1]+rt[i].z;
	rd=ls=rs=lft=0;ld=lf[++ls].z;
	res1=solve();
	ld=ls=rs=lft=0;rd=rt[++rs].z;
	res2=solve();
	cout<<min(res1,res2);
	return 0;
}
