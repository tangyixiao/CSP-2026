#include <bits/stdc++.h>
using namespace std;
int a,b,n;
int c[500001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}
	sort(c+1,c+1+a);
	n=c[a];
	for(int i=a-1;i>a-b;i--){
		n=(n&c[i]);
	}
	cout<<n; 
	return 0;
} 

