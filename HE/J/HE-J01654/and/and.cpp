#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool f[200005],zf[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,num=0;
	cin >> n >> m;
	for(long long i=1;i<=n;i++){
		cin >> a[i];
		f[i]=1;
	}
	for(long long i=(long long)(1<<30);i>=1;i=i>>1){
		if(num>=m){
			for(long long j=1;j<=n;j++){
				f[j]=zf[j];
			}
		}
		num=0;
		for(long long j=1;j<=n;j++){
			if(f[j] && ((a[j]&i)==i)) num++,zf[j]=1;
			else zf[j]=0;
	//		cout <<(a[j]&i) <<"/"<< i   << " ";
		}
	}
	if(num>=m){
		for(long long j=1;j<=n;j++){
			f[j]=zf[j];
		}
	}
	long long ans;
	for(long long j=1;j<=n;j++){
		if(f[j]){
			ans=a[j];
			break;
		} 
	} 
	for(long long j=1;j<=n;j++){
		if(f[j]) ans=ans&a[j];
//		cout << f[j] << endl;;
	}
	cout << ans;
	return 0;
}
