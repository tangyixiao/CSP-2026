#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
const int N=2e5+5;
ll n,a[N],cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char ch;
		cin>>a[i]>>ch;
		for(int j=1;j<=a[i];j++)s+=ch;
	}
	string o=s;
	reverse(s.begin(),s.end());
	cout<<o<<" "<<s;
	for(int i=0;i<s.size();i++){
		if(s[i]!=o[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
}