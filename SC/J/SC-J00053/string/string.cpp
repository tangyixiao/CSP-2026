#include<bits/stdc++.h>
using namespace std;
const int N=200050;
long long a[N];
char c[N],d[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,num=0,ans=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long all=0;
	for(long long i=1;i<=n;i++){
		all+=a[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			num++;
			d[num]=c[i];
		}
	}
	if(all%2==1){
		m=all/2+1;
		for(long long i=1;i<=m;i++){
			if(d[i]!=d[all+1-i]){
				ans++;
			}
		}
	}
	if(all%2==0){
		m=all/2;
		for(long long i=1;i<=m;i++){
			if(d[i]==d[all+1-i]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}