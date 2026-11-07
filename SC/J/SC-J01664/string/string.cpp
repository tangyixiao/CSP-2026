#include<bits/stdc++.h>
using namespace std;
int n;
long long a1[200010];
char c1[200010];
long long a2[200010];
char c2[200010];
long long s1[200010];
long long s2[200010];
long long nex1=1,nex2=1;
long long cnt=0;
char a,b;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a1[i]>>c1[i];
		s1[i]=s1[i-1]+a1[i];
		a2[n-i+1]=a1[i];
		c2[n-i+1]=c1[i];
	}
	for(int i=1;i<=n;i++){
		s2[i]=s2[i-1]+a2[i];
	}
	while(cnt!=s1[n]){
		long long nex=min(s1[nex1],s2[nex2]);
		a=c1[nex1];
		b=c2[nex2];
		if(a!=b){
			ans+=nex-cnt;
		}
		cnt=nex;
		if(s1[nex1]<s2[nex2]){
			nex1++;
		}else if(s1[nex1]>s2[nex2]){
			nex2++;
		}else{
			nex1++;
			nex2++;
		}
	}
	cout<<ans/2;
	return 0;
}