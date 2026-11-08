#include<bits/stdc++.h>
using namespace std;
const int z=2e5+10;
long long a[z];
char b[z];
string c[z];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			c[s]=b[i];
			s++;
		}
	}
	int t=0;
	for(int i=1;i<=s;i++){
		if(a[i]!=a[s-i-1]){
			t++;
		}
	}
	cout<<t;
	return 0;
}
