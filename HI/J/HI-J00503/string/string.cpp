#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;cin>>n;
    string s="";
    while(n--){
    	int a;cin>>a;
    	char c;cin>>c;
    	for(int i=1;i<=a;i++)s+=c;
	}
	int c=0;
	int len=s.size();
	int f=len/2;
	for(int i=len-1,j=0,k=1;k<=f;j++,i--,k++){
		if(s[j]!=s[i])c++;
	}
	cout<<c;
	
	
	
	return 0;
}
