#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010];
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin >> n >> m;
	int maxx=0,sum;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(i==1){
			sum = a[1];
		}
		maxx = max(maxx,a[i]);
		sum = sum&&a[i];
	}
	if(m==1){
		cout << maxx;
	}
	else if(m==n){
		cout << sum;
	}
	else if(m==2){
		maxx=0;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
				if(i!=j){
					maxx = max(maxx,a[i]&a[j]);
				}
			}
		}
		cout << maxx;
	}
    return 0;
}
