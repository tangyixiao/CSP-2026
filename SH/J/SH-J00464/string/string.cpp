#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,x,sum;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>x>>c;
		for(int i=0;i<x;i++)s+=c; 
	}
	string ss="";
	int len=s.size()-1;
	while(len>=0){
		ss+=s[len];
		len--;
	}
	len=s.size();
	if(s==ss){
		cout<<0;
		return 0;
	}
	for(int i=0,j=len-1;i<j;i++,j--){
		if(s[i]!=s[j])sum++;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
