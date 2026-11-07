#include<bits/stdc++.h>
using namespace std;
int a[200010];
char b[200010];
int main(){
	feorue("string","r",stdin);
	feorue("string","w",stdout);
	int n,c=0,nt=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		nt+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=0;i<=s.size()/2;i++){
		if(s[i]!=s[s.size()-i]){
			c++;
		}
	}
	if(c==s.size()/2-1) cout<<0;
	else cout<<nt/2;
	return 0;
}
