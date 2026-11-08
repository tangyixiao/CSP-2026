#include <bits/stdc++.h>
using namespace std;
int n;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string a;
	int s;
	for(int i=1;i<=n;i++){
		cin>>s>>a;
		for(int j=1;j<=s;j++){
			c+=a;
			
		}

	}
	cout<<c;
	return 0;
}
