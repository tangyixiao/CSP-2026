#include<bits/stdc++.h>
using namespace std;
#define N 200005
typedef long long LL;
int n;
LL a[N],ans,len;
char c[N];
int main(){ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	} 
	int i=1,j=n;
	while(i<j){
		LL d=min(a[i],a[j]);
		if(c[i]!=c[j]){ans+=d;}
		a[i]-=d,a[j]-=d;
		if(a[i]==0){i++;}
		if(a[j]==0){j--;}
	}
	cout<<ans;
	return 0;
} 
