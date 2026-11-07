#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freoprn("and.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	int x[200086];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	sort(x+1,x+n+1);
	cout<<x[n-2];
} 
