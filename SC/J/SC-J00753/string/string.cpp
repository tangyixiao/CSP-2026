#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s,w,id,g,ans,cnt=0;
struct pp{
	ll x;
	char y;
}a[300000];
pp b[160000],c[160000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i].x>>a[i].y;
	g+=a[i].x;
}
s=g/2;
for(int i=1;i<=n;i++){
	s-=a[i].x;
	if(s==0){
		id=i;
	}else if(s<0){
		id=i;
		cnt=abs(s);
	} 
}
for(int i=1;i<=id;i++){
	if(a[i].y!=a[n+1-i].y){
		w+=(a[i].x-a[n+1-i].x);
		ans+=min(a[i].x,a[n+1-i].x);
	}else{
		w+=a[i].x-a[n+1-i].x;
	}
}
if(w!=0){
	ans+=abs(w)+cnt;
}
cout<<ans;
	return 0;
}
