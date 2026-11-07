#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long n;
long long m;
long long a[1000000];
long long b[1000000];
long long ans[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		for(long long j=i-1;j>=1;j--){
			if(a[i]==a[j]){
				b[i]=j;
				break;
			}
		}
	}
	cout<<endl;
	for(long long i=n;i>=1;i--){
		int bj=i;
		for(long long j=i;j<=n;j++){
			if(b[j]>=bj){
				bj=j;
			}
		}
		for(long long j=bj;j<=n;j++){
			ans[a[j]]++;
		}
		cout<<endl;
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
