#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
ll n,ans;
ll a[N];
char c[N],c1,c2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int use1=1,use2=n,x1=a[1],x2=a[n];
	c1=c[use1];
	c2=c[use2];
	while(use1<use2){
		if(c1!=c2){
			ans+=min(x1,x2);
		}
		int pop=min(x1,x2);
		x1-=pop;
		x2-=pop;
		if(x1==0){
			use1++;
			c1=c[use1];
			x1=a[use1];
		}
		if(x2==0){
			use2--;
			c2=c[use2];
			x2=a[use2];
		}
	}
	cout<<ans;
	return 0;
} 