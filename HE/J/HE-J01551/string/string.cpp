#include <bits/stdc++.h>
using namespace std;
int n,cnt,m;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int b=1;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=b;i<a+b;i++){
			s[i]=c;
		}
		b+=a;
	}
	m=s.size();
	for(int i=1;i<m/2;i++){
		if(s[i]!=s[m-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
