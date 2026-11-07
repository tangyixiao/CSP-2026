#include<bits/stdc++.h>
using namespace std;
int n,a;
string s;
char t;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>t;
		for(int j=s.size();j<a+s.size();j++){
			s[j]=t;
		}
	}
	cout<<s;
	return 0;
}
