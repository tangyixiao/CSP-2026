#include<bits/stdc++.h>

using namespace std;

int n,a;
char b;
string s;
long long sum=0,ans=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		sum+=a;
		while(a--){
			s+=b;
		}
	}
	for(int i=0;i<(sum+1)/2;i++){
		if(s[i]!=s[sum-i]) ans++;
	}
	cout<<ans;
	return 0;
} 
