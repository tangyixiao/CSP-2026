#include<bits/stdc++.h>
using namespace std;
int f[2000000];
int main(){
	freopen("and.in","r","std.in");
	freopen("and.out","w","std.out");
	int l;
	cin>>l;
	for(int i=0;i<l;i++){
		cin>>f[i];
	}
	cout<<f[l-1];
	return 0;
} 