#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2,m={},n={};
	cin>>c1>>s1>>c2>>s2;
	if(c1==1||c1==16||c2==1||c2==16){
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<s1.size()-1;i++){
		m+=s1[i];
		n+=s2[i];
	}
	cout<<bool(c1==c2)<<bool(m==n)<<bool((s1[2]>'C'&&s2[2]>'C')||(s1[2]<'C'&&s2[2]<'C'));
	cout<<bool(s1[2]+1!='C'&&s2[2]!='D'&&s1[2]!=s2[2]&&s1[2]+1!='D'&&s2[2]!='C'&&(s1[2]+1==s2[2]||s1[2]-1==s2[2]));
}
