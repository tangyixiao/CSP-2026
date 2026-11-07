#include <bits/stdc++.h>
using namespace std;
long long   n,m,cnt,b;
long long a[10000001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
		b =max(b,a[i]);
	}
	if(m==1)cout<<b;
	else if(m==n){
		b=a[0];
		for(int i = 1;i<n;i++){
			b=b &&a[i];
		}
		cout<<b;
	}
	
	else {
		cout<<0;
		
	}
	return 0;
}
