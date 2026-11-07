#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt,len;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		len+=a;
		for(int j=1;j<=a;j++)s+=c;
	}

	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-1-i]){
			cnt++;
		}
		
	}
	cout<<cnt;

	return 0;
} 

