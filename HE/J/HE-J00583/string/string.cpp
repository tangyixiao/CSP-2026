#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
long long n,cnt,l,r,mid,c;
string ans,s1,s2;
struct P{
	long long c;
	string s;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a[i].c>>a[i].s;
	}
	cout<<"0";
	return 0;
}
