#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt;
long long a[10000005];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cnt=max(a[i],a[i+1]);			
	}
	cout<<cnt;
	return 0;
}
