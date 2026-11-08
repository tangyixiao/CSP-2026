#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
char ch[200005];
int check(string s1){
	string s2="";
	for(int i=s1.size()-1;i>=0;i--)s2+=s1[i];
	if(s1==s2)return 0;
	else{
		int sum=0;
		for(int i=0;i<s1.size()/2;i++){
			sum+=(s1[i]!=s2[i]);
		}
		return sum;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n==2){
		cin>>a[1]>>ch[1]>>a[2]>>ch[2];
		if(ch[1]==ch[2])cout<<0;
		else cout<<min(a[1],a[2]);
		return 0;
	}
	long long mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
		mx=max(mx,a[i]);
	}
	if(n<=200000&&mx<=50){
		string s1="";
		for(int i=1;i<=n;i++)for(int j=1;j<=a[i];j++)s1+=ch[i];
		cout<<check(s1);
		return 0;
	}
	return 0;
}
