//Trick||Treat!
#include<bits/stdc++.h>
using namespace std;
long long n,a[200002],s=0,ans=0,ans2=0;
char c[2000002];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int m,pos1=0,pos2=n-1;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
	}
	m=s/2;

	for(int i=0;i<=m-1;i++){
		if(!a[pos1])pos1++;
		if(!a[pos2])pos2--;
		if(c[pos1]!=c[pos2])ans++;
		a[pos1]--;
		a[pos2]--;
	}
	cout<<ans<<' '<<ans2;
}

