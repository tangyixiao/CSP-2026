#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,t,a[100001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(n==m) {
		t=a[1];
		for(int i=2;i<=n;i++) t=t&a[i];
		cout<<t;
	}
	else if(m==1){
		t=0;
		for(int i=1;i<=n;i++){
			if(t<a[i]) t=a[i];
		}
		cout<<t;
	}
    return 0;
}
