#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	long long cnt=0,n;
	long long m,len;
	cin>>n;
	char q;
	for(int i=0;i<n;i++){
		cin >> m;
		cin>>q;
		for(int j=m;j>=1;j--){
			s[i]=q;
			len++;
		}
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]) cnt++;
	}
	cout << cnt;
	return 0;
}
