#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m,nn,a[N];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	a[i];
	}
	nn=a[1];
	for(int i=2;i<=m;i++){
    	nn=nn&a[i];
	}
	cout<<nn;
}
