#include<bits/stdc++.h>
using namespace std;
string s;
unsigned long long ss,ans;
const int N=2e5+5;
int a,n;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(a>4e8){
			cout<<0;
			return 0;
		}
		ss+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	if(ss%2==0){
		for(int i=0;i<n/2;i++){
			if(s[i]!=s[n-i]){
				ans++;
			}
		}
	}else{
		for(int i=0;i<(n+1)/2;i++){
			if(s[i]!=s[n-i]){
				ans++;
			}
		} 
	}
	cout<<ans;
	
	return 0;
}
