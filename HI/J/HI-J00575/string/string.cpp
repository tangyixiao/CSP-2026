#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m,mi=2000000000,k=0;cin>>n; 
	string s="",a="";
	for(int i=0;i<n;i++){
		cin>>m>>a;
		for(int j=0;j<m;j++)s+=a;
	}a="";
	for(int i=s.size()-1,j=0;i>=0,j<s.size();i--,j++)a+=s[i];
	for(int i=0;i<s.size()/2;i++){
		if(a[i]!=s[i])k++;
	}mi=min(mi,k),k=0;
	cout<<mi;
}
