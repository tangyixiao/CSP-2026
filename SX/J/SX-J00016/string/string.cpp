#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull cnt;
long long n,a;
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	ull len=s.size();
	for(int i=1;i<=ceil(len/2.0);i++){
		if(s[i]!=s[len-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
