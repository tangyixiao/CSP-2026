#include <bits/stdc++.h>
using namespace std;
int a,s;
long long d[1000001],g;
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>a>>s;
	for(int i=0;i<a;i++){
		cin>>d[i];
	}
	cout<<d[a-1];
	return 0;
}
