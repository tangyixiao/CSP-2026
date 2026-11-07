#include<bits/stdc++.h>
using namespace std;
string s;
long long len;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		len+=a;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	if(len>1000000000){
		cout<<len/2;
	}
	else{
		int cnt=0;
	    for(int i=0;i<len/2;i++){
		    if(s[i]!=s[len-1-i]){
			    s[len-1-i]=s[i];
			    cnt++;
		    }
	    }
	    cout<<cnt;
	}
	return 0;
}
