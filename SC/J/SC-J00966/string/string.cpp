#include<bits/stdc++.h>
using namespace std;
int const N=2e8+10;
long long n,m,a[N],cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int l;
		char c;
		cin>>l>>c;
		for(int i=1;i<=l;i++){
			s[++m]=c;
		}
	} 
	for(int i=1;i<=m/2;i++){
		if(s[i]!=s[m-i+1]) cnt++;
	}
	cout<<cnt;
	return 0;
}  