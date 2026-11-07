#include<bits/stdc++.h>
using namespace std;
long long n,s,il,ir,jl,jr,ans,pi,pj;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i]>>c[i];
	for(int i=0,j=n-1;i<n||j>=0;){pi=i;pj=j;
		if(ir<jr){il=ir;ir+=a[i];i++;}
		else if(ir>jr){jl=jr;jr+=a[j];j--;}
		else {il=ir;jl=jr;ir+=a[i];i++;jr+=a[j];j--;}
		ans+=(c[i-1]!=c[j+1])*max(min(ir,jr)-max(il,jl),0ll);
	}
	cout<<ans/2;
	return 0;
}
