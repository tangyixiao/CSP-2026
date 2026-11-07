#include<bits/stdc++.h>
#define ll long long
//#define ld long double
//#define d double
using namespace std;
const int N=2e5+10;
struct obj{
	ll num;
	char id;
}a[N];
ll n;
string s;
ll f_hw(string s){
	ll len=s.size(),ans=0;
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) ans++;
	}
	return ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].id;
		for(int j=1;j<=(a[i].num);j++){
			s+=a[i].id;
		}
	}
	cout<<f_hw(s);
	return 0;
}


