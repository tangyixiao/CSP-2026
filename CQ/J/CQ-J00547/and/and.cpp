#include <bits/stdc++.h>
using namespace std;

long long n,m ,a[200005],w,w2;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1 ; i<=n ; i++){
		cin>>a[i];
		
	}
	
	sort(a+1,a+n+1);
	
	for(int i=1 ; i<=n ; i++){
		if(a[i]!=a[i-1])w++;
	}
	
	for(int i=1 ; i<=n ; i++){
		if(a[i]!=a[i-1])w2++;
		if(w2==(w+1)/2){
			cout<<a[i];
			return 0;
		}
	}
	
	cout<<a[n/2];
	
	return 0;
} 
