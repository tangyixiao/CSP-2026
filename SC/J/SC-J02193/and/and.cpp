#include<bits/stdc++.h>
using namespace std;
int n, m, a[200020], ans = 0, c[200020];
void f(int step, int x, int b[200020]){
	//<<' ';
	if(step == 0){
		
		for(int i = 1;i < m;i++){
			//cout<<b[i]<<' '<<b[i+1];
			b[i] = b[i] & b[i + 1];
			
		}
		//cout<<'\n';
		ans = max(b[m - 1],ans);
		return;
	}if(m > n - x + 1){
		return;
	}
	for(int i = x; i <= n;i++){
		b[m - step + 1] = a[i];
		//cout<<<<' ';
		f(step - 1, x + 1,b);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n ;i++){
		cin>>a[i];
	}f(m,1,c);
	cout<<ans;
	return 0;
}