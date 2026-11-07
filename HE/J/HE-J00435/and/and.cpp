#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int n_max,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n>>m;
	for(int i=1;i<=n;i++){
		cin >> a[i]; 
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout << a[n];
	}else if(n==m){
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]%2==0){
				cout << 0;
				return 0;
			}
		}cout << a[i];
	}
	return 0;
}
