#include<bits/stdc++.h>
using namespace std;
int n,a[200200],ans=0;
char c[200200];
long long m=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	m/=2;
	int cnta=1,cntb=n,suma=-1,sumb=a[n]+1;
	for(int i=1;i<=m;i++){
		if(suma+1>a[cnta]){
			cnta++;
			suma=1;
		}else{
			suma++;
		}
		if(sumb-1<1){
			cntb--;
			sumb=a[cntb];
		}else{
			sumb--;
		}
		if(c[cnta]!=c[cntb])ans++;
	}
	cout<<ans;
	return 0;
}
