#include<bits/stdc++.h>
using namespace std;
long long n,b;
char c;
string s,l;
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    long long a[n];
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
    	    s+=c; 
	    }
    }
	for(int k=s.size();k>=1;k--){
		l+=s[k];
	}
	for(int h=1;h<=s.size()-1;h++){
		if(s[h]!=l[h]) b++; 
	}
	cout<<b;
	return 0; 
}