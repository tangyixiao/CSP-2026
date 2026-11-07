#include<bits/stdc++.h>
using namespace std;
long long n,a[99999999],cnt=1,ans;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout) ;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			a[j+cnt-1]=int(y);
		}
		cnt+=x;
	}
	cnt--;
	for(int i=1;i<=cnt/2;i++){
		if(a[i]!=a[cnt-i+1]) ans++;
	}
	cout<<ans;
	return 0;
}
