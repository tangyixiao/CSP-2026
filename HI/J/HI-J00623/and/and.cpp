#include<bits/stdc++.h>
using namespace std;
int maxn=-2e9,minn=2e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[100000];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(maxn<=a[i]){
			maxn=a[i];
		}
		if(minn>=a[i]){
			minn=a[i];
		}
	}
	if(m==n){
		cout<<minn;	
	}else{
		cout<<maxn;
	}
	return 0;
}
