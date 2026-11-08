#include<bits/stdc++.h>
using namespace std;
long long l,r,n,sum,ans,mid,lt,rt,c[200010];
bool h;
struct node{
	long long ct;char c;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].ct;
		cin>>a[i].c;
		sum+=a[i].ct;
		a[i].ct=sum-a[i].ct+1;
		//cout<<a[i].ct<<endl;
		c[i]=a[i].ct;
	}
	c[n+1]=sum+1;
	if(sum%2==1){
		l=sum/2;
		r=l+2;
	}else{
		l=sum/2;
		r=l+1;
	}
	for(int i=1;i<=n;i++){
		if(c[i]<=l&&l<=c[i+1])lt=i;
		if(c[i]<=r&&r<=c[i+1])rt=i+1;
	}
	while(l>=1||r<=sum){
		long long dt=min(l-c[lt]+1,c[rt]-r);
		//cout<<lt<<" "<<rt<<endl;
		l-=dt;r+=dt;
		if(a[lt].c!=a[rt-1].c){
			//cout<<111111<endl;
			ans+=dt;
		}
		if(l<c[lt])lt--;
		if(r>=c[rt])rt++;
	}
	cout<<ans;
	return 0;
}
