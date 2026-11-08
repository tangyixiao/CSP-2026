#include <bits/stdc++.h>
using namespace std;
long long n,m,k[1000000];
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>n>>m ;
	for(int i=1;i<=n;i++){
		cin>>k[i];
	}
	sort(1+k,k+1+n);
	int op=k[n];
	for(int i=1;i<m;i++){
		op=(k[n-i]&op);
	}
	cout<<op;
	return 0;
}  
