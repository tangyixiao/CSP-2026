#include<bits/stdc++.h>
using namespace std;

int n, m, a[200004], ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans = a[n];
	
	m--;
	for(int i = n-1;i >= 1;i--){
		if(m == 0){
			break;
		}
		ans = min(a[i],ans);
		m--;
	}
	
	cout<<ans;
	return 0;
} 