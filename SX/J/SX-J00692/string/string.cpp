#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int n;
string s="";
long long a,cnt;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(long long i=1;i<=a/2;i++){
			s+=c;
			s+=c;
		}
		if(a%2==1) s+=c;
	}
	long long l=s.size();
	for(long long i=0;i<=l/2;i++){
		if(s[i]!=s[l-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}