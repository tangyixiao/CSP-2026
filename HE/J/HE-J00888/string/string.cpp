#include<bits/stdc++.h>
using namespace std;
string s="a"; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		long long a;
		string c;
		cin >>a >>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
		x+=a;
	}
	long long z=x/2,ans=0;
	for(int i=1;i<=z;i++){
		if(s[i]!=s[x-i+1]){
			ans++;
		}
	}
	cout <<ans;
	return 0;
} 
