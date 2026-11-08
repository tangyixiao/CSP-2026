#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a;
	int n;cin>>n;
	int q=0;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		string s;cin>>s;
		for(int j=1;j<=x;j++){
			a=a+s;
		}
	}
	int p=a.size();
	for(int k=1;k<=a.size();k++){
		if(a[k]!=a[p-k]) q++;
	}
	cout<<q-1;
	return 0;
}
