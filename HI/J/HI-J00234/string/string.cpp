#include<bits/stdc++.h>
using namespace std;
string s,m,k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++) s+=c;
	}
	m=s;
	reverse(s.begin(),s.end());
	int ans=0;
		int i=0;
		while(m!=s){
			if(m[i]!=s[i]){
				s[i]=m[i];
				i++;
				ans++;
			}
			k=s;
			reverse(s.begin(),s.end());
			if(k==s) break;
		}
	cout<<ans;
	return 0;
}

