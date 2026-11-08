#include<bits/stdc++.h>
using namespace std;
long long a,b,z,d;
char c;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b>>c;
		for(int j=0;j<b;j++){
			if(i>a/2)s1+=c;
			else s+=c;
		}
		if(c!=s[0])d=1;
	}
	if(d==0){
		cout<<"0";
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s1[i])z++;
	}
	cout<<z;
	return 0;
}
