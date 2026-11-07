#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		if(a[i]!=a[i+1]){
			cout<<i<<" ";
		}
	}
	return 0;
}
