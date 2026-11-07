#include<bits/stdc++.h>
using namespace std;
long long n=0,m=0,maxx=0,f=1;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1]&&i!=1){
			f=0;
		}
	}
	if(f==1){
		cout<<a[1];
		return 0;
	}
	return 0;
}