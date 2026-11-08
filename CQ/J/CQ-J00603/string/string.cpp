/*string*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e3+5;
string s;
int cnt,n;
bool check(int i,int j){
	return s[i]==s[j];
}
signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char ch;int num;
		cin>>num>>ch;
		for(int j=1;j<=num;j++) s+=ch;
	}
	static int len=s.size();
	s=' '+s;
	for(int i=1;i*2<=len;i++){
		if(!check(i,len-i+1)) cnt++;
	}
	cout<<cnt<<'\n';
	return 0;
}
/*

*/
