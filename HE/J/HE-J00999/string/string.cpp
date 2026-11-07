#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans;
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
    long long x=1,y=n;
    while(x<y){
    	long long z=min(a[x],a[y]);
    	if(b[x]!=b[y]) ans+=z;
		a[x]-=z;
    	a[y]-=z;
		if(a[x]==0)x++;
		if(a[y]==0)y--;
	}
	cout<<ans;;
	return 0;
}
