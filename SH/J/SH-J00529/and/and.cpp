#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long a[N],b[N];
int n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[0] = a[i-1];
		for(int j=m;j>=1;j--){
			b[j] = max(b[j],(b[j-1] & a[i]));
		}
	}
	cout<<b[m];
	return 0;
}
