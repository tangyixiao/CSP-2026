#include <bits/stdc++.h>
using namespace std;
int a[100005];
char b[100005];
char c[100000005];
long long n,u;
long long lon=0,lonn=0,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++)c[j+lon]=b[i];
		lon+=a[i];
	}
	long long i=1;
	while(i<=lon/2){
		if(c[i]!=c[lon-i+1])ans++;
		i++;
	}
	cout<<ans;
	return 0;
}