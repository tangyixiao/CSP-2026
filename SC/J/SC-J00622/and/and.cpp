#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,s,d,l;
	int n[10001];
	string g,h;	
	cin>>a>>s;
	for(int i=1;i<=a;i++){
		cin>>n[i];
	}
	sort(n,n+a);
	l=s;
	cout<<n[a-l];
	return 0;
}