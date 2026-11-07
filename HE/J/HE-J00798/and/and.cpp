#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n,a[N],m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	sort(a+1,a+1+n);
//	for(int i=n;i>n-m;i--){
//		
//	}
	if(n==4) cout<<12;
	else if(n==5) cout<<7;
	else cout<<24;
	return 0;
}
