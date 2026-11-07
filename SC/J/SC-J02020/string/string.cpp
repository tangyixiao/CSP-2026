#include<bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
string s;
long long cnt=0;
void f(){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]==s[s.size()-i-1]) continue;
		else cnt++;
	}
	if(!cnt) cout<<0<<endl;
	else cout<<cnt<<endl;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		} 
	}
	f();
	return 0;
}