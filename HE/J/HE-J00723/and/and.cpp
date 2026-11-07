#include<bits/stdc++.h>
using namespace std;
int n,m,q = 1,w;
long long a[200005],ans;
int main(){
	freopen("and,in","r",stdin);
	freopen("and,out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i = 1;i<= n;i++){
		cin>>a[i];
	}
	cout<<a[1] & a[2];
}
