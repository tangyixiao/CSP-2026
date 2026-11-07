#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0,ch=0;
string s,s2;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>c;
		sum+=m;
		for(int i=1;i<=m;i++){
			s+=c;
		} 
	}
	cout<<sum;
	for(int i=sum-1;i>=sum/2;i--){
		s2+=s[i];
	}
	for(int i=0;i<sum/2;i++){
		if(s[i]!=s2[i]) ch++;
	}
	cout<<ch;
	return 0;
} 
