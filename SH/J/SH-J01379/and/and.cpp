#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m, a, ans=0;
	int arr[2005];
	cin>>n>>m;
	if(m == n){
		for(int i = 1; i <= n; ++i){
			cin>>a;
			if(i == 1){
				ans = a;
			}
			else
				ans = ans&a;
		}
		cout<<ans;
	}
	else if( m == 1){
		for(int i = 1; i <= n; ++i){
			cin>>a;
			if(i == 1){
				ans = a;
			}
			else
				ans = max(ans, a);
		}
		cout<<ans;
	}
	else if(m == 2){
		for(int i = 1; i <= n; ++i)
			cin>>arr[i];
		for(int i = 1; i < n; ++i){
			for(int j = i; i <= n; ++i)
				ans = max(ans, arr[i] & arr[j]);
		}
		cout<<ans;
	}
	
}
