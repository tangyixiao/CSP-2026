#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n;
	cin>>n>>m;
	int ma=0,an=0x3f3f3f;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		max(a[i],ma);
		an=an&a[i];
	}
	if(m==1){
		cout<<ma;
	}
	if(m==n){
		cout<<an;
	}
    return 0;
}