#include<bits/stdc++.h>
using namespace std;
int const maxn=1e6+48576;
int n;
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	long long a;
	char b;
	char c[maxn];
	long long maxx=0;
	cin>>n;
	long long k=1;
	for (int i=1;i<=n;i++){
		cin>>a;
		maxx+=a;
		cin>>b;
		for (int j=k;j<=k+a;j++){
			c[j]=b;
		}
		k+=a;
	}
	long long ans=0;
	if (maxx%2!=0){
		for (long long i=1,j=maxx;i<=maxx/2+1&&j>=maxx/2+1;i++,j--){
			if (c[i]==c[j]){
				continue;
			}
			else {
				ans++;
			}
		}
	}
	else {
		for (int i=1,j=maxx;i<=maxx/2&&j>=maxx/2+1;i++,j--){
			if (c[i]==c[j]){
				continue;
			}
			else {
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 
