#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;long long z=0,t=0;vector<string> p;cin>>n;
	for(int i=1;i<=n;i++){
		int q;string w;cin>>q>>w;t+=q;for(int j=1;j<=q;j++)p.push_back(w);
	}
	int l=0,r=t-1;
	while(l<r){if(p[l]!=p[r])z++;l++;r--;}
	cout<<z;
}
