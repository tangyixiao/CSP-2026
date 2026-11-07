#include<bits/stdc++.h>
using namespace std;
const int nnn=5e5+5;
long long a[nnn];
long long ll[nnn];
long long l[nnn];
int main(){
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;cin>>n>>m;
	bool f=true;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		if(i==0) continue;
		if(f==false) continue;
		if(a[i-1]>a[i]) f=false;
	}
	if(f)cout<<1<<endl;
	else cout<<0<<endl;
	if(f){
		for(long long i=0;i<n;i++){
			if(a[i]!=a[i+1]){
				cout<<i+1<<" ";
			}
		}
		return 0;
	}
	for(long long i=0;i<n;i++){
		long long last=0;
		for(long long j=i;j<n;j++){
			bool f=true;
			long long p=0;
			for(long long k=0;k<last;k++){
				if(l[k]==a[j]){
					p+=k;
					f=false;break;
				}
			}
			if(f){
				l[last]=a[j];
				last++;
			}
			else{
				last=p+1;
			}
		}
		for(long long j=0;j<last;j++){
			ll[l[j]]++;
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<ll[i]<<" ";
	}
	return 0;
}
