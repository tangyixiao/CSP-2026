#include<bits/stdc++.h>
using namespace std;
long long n,b[200009],ans,k;
char a[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>a[i];
		k+=b[i];
	}
	long long i=1,m=1,h=n;
	while(i<=k){
		char s1=a[m],s2=a[h];
		if(s1!=s2){
			ans+=min(b[m],b[n]);
		}
		i+=min(b[m],b[n]);
		k-=min(b[m],b[n]);
		int t=b[m],l=b[h];
		if(t>=l){
			b[m]-=b[h];
			h-=1;
		}
		if(t<=l){
			b[h]-=b[m];
			m+=1;
		}
	}
	if(i==k) ans+=min(b[m],b[n]);
	cout<<ans;
	return 0;
}