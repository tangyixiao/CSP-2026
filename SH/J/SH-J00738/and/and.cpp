#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	ans=a[n-m];
	cout<<ans;
	return 0;
}
