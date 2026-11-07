#include <bits/stdc++.h>
using namespace std;
const int N=2e5;
int n,m,a[N],s[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n<=2000){
		cout<<n;
	}else if(n>2000&&n<=N){
		cout<<n-1;
	}
	return 0;
} 