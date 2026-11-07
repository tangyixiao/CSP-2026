#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,w=0;
	int a[237799],c[237799];
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		}
		if(a[1]!=a[n]){
	w++;
		}

cout<<w;
	return 0;
}

