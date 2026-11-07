#include <bits/stdc++.h>
using namespace std;
int n,m,cnt;
string c;
string s;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>m;
		cin>>a;
		for(int i=1;i<=m;i++){
			c+=a;
		}
	}
	int l=c.size();
	for(int i=0;i<l;i++){
		if(c[i]!=c[l-i-1]){
			cnt++;
			c[i]=c[l-i-1];
		}
	}
	cout<<cnt;
	return 0;
}