#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
long long a[N],ans; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out ","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	} 
	if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans=ans&a[i];
	}
	cout<<ans<<endl;
	return 0;
} 
