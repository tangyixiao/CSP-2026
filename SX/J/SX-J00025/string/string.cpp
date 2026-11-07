#include <bits/stdc++.h>
using namespace std;
long long n,a,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		int b;
		char c;
		cin>>b>>c;
		for(int j=1;j<=b;j++){
			s=s+c;
			a++;
		}
	}
	if(a%2==0){
		for(int i=0;i<=a/2-1;i++){
			if(s[i]!=s[a-i-1]){
				ans++;
			}
		}
	}
	else{
		for(int i=0;i<=a/2;i++){
			if(s[i]!=s[a-i-1]){
				ans++;
		}
		}
	}
	cout <<ans;
	return 0;
}