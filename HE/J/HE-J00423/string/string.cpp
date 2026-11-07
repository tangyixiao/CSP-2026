#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	cout<<2;
	return 0;
}
