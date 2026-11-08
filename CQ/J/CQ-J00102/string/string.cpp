#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int cnt;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	if(n<=2000) {
		cin>>n;
		for(int i=0; i<n; i++) {
			int m;
			char a;
			cin>>m>>a;
			for(int j=0; j<m; j++) {
				s=s+a;
			}
		}
		cout<<n;
		if(s.size()%2==0){
			for(int i=0;i<s.size()/2-1;i++){
				if(s[i]!=s[i+s.size()/2]) cnt++;
			}
		}else{
			for(int i=0;i<s.size()/2-1;i++){
				if(s[i]!=s[i+s.size()/2+1]) cnt++;
			}
		}
		cout<<cnt;
	}


	return 0;
}
