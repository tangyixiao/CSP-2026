#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n;cin >>n;
long long l=0;
string s;
for (int i=1;i<=n;i++){
	long long x;cin >>x;
	char tt;cin >>tt;
	for (int i=1;i<=x;i++){
		s=s+tt;
	}
}
long long y=s.size()-1;
if (y%2==0){
	long long h=y/2;
	for (int i=1;i<=y/2;i++){
		if (s[h+i]!=s[h-i]){
			l++;
		}
	}
	cout <<l;
	return 0;
}
else{
	long long a=y/2,b=y/2+1;
	for (int i=0;i<=y/2;i++){
		if (s[a-i]!=s[b+i]){
			l++;
		}
	}
	cout <<l;
	return 0;
}
return 0;
}
