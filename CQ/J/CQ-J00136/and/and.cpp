#include<bits/stdc++.h>
using namespace std;
const int N=10e6;
int n,m,a[N],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ans=a[n];
	while(m>0){
		ans=a[n]&ans;
		m--,n--;
	}
	cout<<ans;
	return 0;
}  
