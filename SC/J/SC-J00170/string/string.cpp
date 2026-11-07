#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,a[N],f[N][2],b[N];
char ci[N],c[N]; 
long long s[2*N],s2[2*N],ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[i],&c[i]);
	}
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i];
	}
	reverse(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		s[i+n+1]=s[i+n]+a[i];
	}
	memcpy(s2,s,sizeof s2);
	sort(s+1,s+2*n+2);
	int l=unique(s,s+2*n+2)-s-1;
	
	for(int i=1,j=1;i<=l;i++){
		while(!(s2[j-1]<s[i]&&s[i]<=s2[j]))j++;
		ci[i]=c[j];
	}
	for(int i=1;i<=l/2;i++){
		if(ci[i]!=ci[l+1-i])ans+=s[i]-s[i-1];
		
	}
	cout<<ans;
	return 0;
}