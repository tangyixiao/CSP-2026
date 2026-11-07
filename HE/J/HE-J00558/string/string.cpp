#include<bits/stdc++.h>
using namespace std;
int n,x;
long long ans,cnt1=1,cnt2;
struct node{
	long long x;
	char s;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	cnt2=n;
	if(n/2==1)x++;
	for(int i=1;i<=n;i++)cin>>a[i].x>>a[i].s;
	while(1){
		if(a[cnt1].s!=a[cnt2].s){
			if(a[cnt1].x<=0)cnt1++;
			if(a[cnt2].x<=0)cnt2--;
			ans+=min(a[cnt1].x,a[cnt2].x);
			a[cnt1].x-=min(a[cnt1].x,a[cnt2].x);
			a[cnt2].x-=min(a[cnt1].x,a[cnt2].x);//24474 690
			
			if(a[cnt1].x<0)cnt2+=abs(a[cnt1].x);
			if(a[cnt2].x<0)cnt1+=abs(a[cnt2].x);
			
		}
		else{
			a[cnt1].x-=min(a[cnt1].x,a[cnt2].x);
			a[cnt2].x-=min(a[cnt1].x,a[cnt2].x);
			if(a[cnt1].x<=0)cnt1++;
			if(a[cnt2].x<=0)cnt2--;
			if(a[cnt1].x<0)cnt2+=abs(a[cnt1].x);
			if(a[cnt2].x<0)cnt1+=abs(a[cnt2].x);
		}
		if(cnt1>=cnt2)break;
	}
	cout<<ans/2;
	return 0;
}
