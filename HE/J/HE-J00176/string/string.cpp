#include<bits/stdc++.h>
using namespace std;
int n,ans;
long long a;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s[j]==a;
			if(s[j]!=s[a-j]){
				ans++;
			}
		}
	}
	
	cout<<ans;
	return 0;
}
