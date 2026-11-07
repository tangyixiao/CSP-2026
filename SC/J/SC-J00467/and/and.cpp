#include<bits/stdc++.h>
using namespace std;
const int MAX=1073741823;
int a[100000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]^=MAX;
    }
    sort(a+1,a+n+1);
    int ans=MAX;
    for(int i=1;i<=m;i++){
    	ans&=(a[i]^MAX);
	}
	cout<<ans;
	return 0;
}
