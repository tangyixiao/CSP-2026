#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string s;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	long long size=0;
	for(long long i=1;i<=n;i++){
		long long a;
		char b;
		cin>>a>>b;
		for(long long i=1;i<=a;i++){
			s+=b;
			size++;
		}
	}
	long long cnt=0;
	long long l=0,r=size-1;
//	cout<<s<<endl;
	for(long long i=0;i*2<size;i++){
		if(l>=r){
			break;
		} 
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
//	cout<<l<<" "<<r<<endl;
	cout<<cnt;
	return 0;
} 