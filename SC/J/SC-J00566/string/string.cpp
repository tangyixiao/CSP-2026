#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long a,n,d=0,e=0;
	string c;
	char b;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a>>b;
		for(int j=d;j<d+a;j++) {
			c+=b;
			
		}
		d+=a;
	}
	for(int i=0;i<c.size()/2;i++) {
		if(c[i]!=c[c.size()-i-1]) {
			e++;
		}
	}
	cout<<e;
	return 0;
} 