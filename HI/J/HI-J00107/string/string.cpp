#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c,t,h=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c>>t;
		h+=c;
	}cout<<h/2;
	return 0;
} 
