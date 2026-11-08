#include <bits/stdc++.h>
using namespace std; 
const int N=1e7+1;
long long n,x,c;
string s;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>a;
		while(x--)s+=a;
	}
	long long len=s.size();
	for(long long i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1])c++;
	}
	cout<<c;
	return 0;
}
