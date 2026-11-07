#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r"stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,cnt=0;
	cin >> n;
	string s;
	int cur=0;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin >>x >> y;
		cnt+=x;
		for(int j=1; j<=x; j++){
			s[cur++]=y;
		}
	}
	int l=0,r=cnt-1;
	while(l<=r){
	    if(s[l]!=s[r]){
	    	ans++;
		}
		l++;
		r--; 
	}
	cout << ans;
} 
