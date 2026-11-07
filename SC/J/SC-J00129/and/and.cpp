#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int n,m,a[N];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a,a+n,greater<int>());
	if(m==1){
		cout<<a[1];
	}
	return 0;
}