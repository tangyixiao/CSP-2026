#include<bits/stdc++.h>
using namespace std;
int n,m,x,sum,m1;
string s,l;
char c,c1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>c; 
		for(int j=x;j<=x+m;j++){
			s[j]=c;
		}
		x=x+m+1;
	}
	string l;
	l=s;
	reverse(s.begin(),s.end());
	if(s==l){
		cout<<0;
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=l[i])sum++;
	}
	cout<<sum/2;
	return 0;
}
