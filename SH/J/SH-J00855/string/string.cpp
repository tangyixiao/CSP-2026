#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long p=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		p+=x;
		string h;
		cin>>h;
		for(int j=1;j<=x;j++){
			s+=h;
		}
	}
	int ans=0;
	if(p%2==1){
		for(int i=0;i<(p-1)/2;i++){
			if(s[i] != s[p-i-1]){
				ans++;
			}
		}
	}
	else{
		for(int i=0;i<=(p/2-1);i++){
			if(s[i] != s[p-i-1]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
	
}
