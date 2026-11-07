#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,t,ans,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	long long l=0,r=m+1;
	long long x=1,y=n;
	while(y>x){
		if(c[x]!=c[y]) ans+=min(a[x],a[y]);
		if(a[x]==a[y]){t=a[x]; x++,y--;}
		else if(a[x]<a[y]){t=a[x]; a[y]-=a[x]; x++;}
		else{t=a[y]; a[x]-=a[y]; y--;}
		l+=t,r-=t;
	}
	cout<<ans;
	return 0;
}