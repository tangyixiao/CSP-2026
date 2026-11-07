#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
void f(int p,int x,int sum){
	if(p>n){
		return;
	}
	if(x==m){
//		cout << y++ << ' ';
		ans=max(ans,sum);
		return;
	}
	for(int i=p+1;i<=n;i++){
		f(i,x+1,sum&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		f(i,1,a[i]);
	}
	cout << ans;
	return 0;
} 