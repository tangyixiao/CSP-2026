#include<bits/stdc++.h>
using namespace std;
long long n,ans,s[200001];
struct node{
	int val;
	char tp;
}a[200001],fan[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].val>>a[i].tp;
		s[i]=s[i-1]+a[i].val;
	}
	long long cnt1=0,cnt2=0,sum=s[n],ns;
	ns=sum/2;
	for(int i=n;i>=1;i--){
		ns-=a[i].val;
		fan[++cnt2]=a[i];
		if(ns<=0){
			fan[cnt2].val+=ns;
			break;
		}
	}
	ns=sum/2;
	for(int i=1;i<=n;i++){
		ns-=a[i].val;
		cnt1++;
		if(ns<=0){
			a[cnt1].val+=ns;
			break;
		}
	} 
	int i1=1,i2=1;
	while(i1<=cnt1&&i2<=cnt2){
		int gai=min(a[i1].val,fan[i2].val);
		if(a[i1].tp!=fan[i2].tp)ans+=gai;
		a[i1].val-=gai;
		fan[i2].val-=gai;
		if(a[i1].val==0)i1++;
		if(fan[i2].val==0)i2++;
	}
	cout<<ans;
}
