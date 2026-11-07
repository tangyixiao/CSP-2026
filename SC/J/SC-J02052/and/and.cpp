#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],maxn=-1,b=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=m;i<=n;i++){
		b*=i;
	}
	for(int i=1;i<=b;i++){
		for(int j=1;j<=n;j++){
			;
		}
	}
	return 0; 
}
