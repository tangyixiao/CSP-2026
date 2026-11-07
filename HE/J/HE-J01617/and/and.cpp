#include <bits/stdc++.h>
using namespace std;

long long a[200005];
long long ans;
long long sum = -1;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	if(m == 1){
		for(int i=0; i<n; i++){
			ans = max(a[i],ans);
		}
		cout<<ans;
		return 0;
	}
	if(m == 2){
		for(int i=0; i<n; i++){
			sum = -1;
			for(int j=i+1; j<n; j++){
				sum = a[i] & a[j];
			}
			ans = max(ans,sum);
		}
		cout<<ans;
		return 0;
	}
	if(m == n){
		ans = -1;
		for(int i=0; i<n; i++){
			ans = ans & a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m == n-1){
		sum = -1;
		for(int i=0; i<n-1; i++){
			sum = sum & a[i];
		}
		for(int i=1; i<n; i++){
			ans = ans & a[i];
		}
		ans = max(ans,sum);
		cout<<ans;
		return 0;
	}
	cout<<a[m];

}

/*
4 2
3 15 12 12
*/
