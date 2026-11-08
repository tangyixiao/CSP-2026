#include<bits/stdc++.h>
using namespace std;
int n;
long long sum,ans;
struct node{
	long long x;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].x>>a[i].c;
	for(int i=1;i<=n;i++)sum+=a[i].x;
	long long k=0,p=1,q=n,x=a[p].x,y=a[q].x;
	while(k<=sum/2&&p<q){
		if(x>sum/2)x=sum/2;
		if(y>sum/2)y=sum/2;
		if(a[p].c!=a[q].c){
			if(x-k<y-k)ans+=x-k,p++,k+=x-k,x+=a[p].x;
			else if(y-k>x-k)ans+=y-k,q--,k+=y-k,y+=a[q].x;
			else ans+=x-k,k+=x-k,p++,q--,x+=a[p].x,y+=a[q].x;
		}else{
			if(x-k<y-k)p++,k+=x-k,x+=a[p].x;
			else if(y-k>x-k)q--,k+=y-k,y+=a[q].x;
			else k+=x-k,p++,q--,x+=a[p].x,y+=a[q].x;
		}
	}
	cout<<ans;
    return 0;
}
