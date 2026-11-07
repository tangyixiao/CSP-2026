#include<bits/stdc++.h>
using namespace std;
const long long N=5e5+10;
const long long M=3e5+10;
long long n,m,now;
long long a[N],cnt[M];
bool f(long long b){
	for(long long i=1;i<b;i++){
		if(a[i]==b){
			return true;
		}
	}
	return false;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		long long b;
		cin>>b;
		a[i]=b;
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			if(f(a[j])){
				for(long long k=j-1;;k--){
					if(a[k]==a[j]){
						break;
					}
					a[k]=0;
				}
			}
		}
		for(long long j=i;j<=n;j++){
			if(a[i]!=0){
				cnt[a[i]]++;
			}
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
