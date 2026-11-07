#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	long long a;
	char c;
	while(n--){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s=s+c;
		}
	}
	long long ans=0;
	long long l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		} 
		l++,r--;
	}
	cout<<ans;
	return 0;
}