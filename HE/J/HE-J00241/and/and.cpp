#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m; 
unsigned long long a[N],f=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		if(f==m){
			cout<<a[i];
			return 0;
		}
		f++; 
	}
	return 0;
}
