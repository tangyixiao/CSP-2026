#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else cout<<0;
	string s3,s4;
	s3+=s1[0];
	s3+=s1[1];
	s4+=s2[0];
	s4+=s2[1];
	if(c1==c2&&s3==s4)cout<<1;
	else cout<<0;
	char s5,s6;
	s5+=s1[2];
	s6+=s2[2];
	bool f=0;
	if(c1==c2&&s3==s4&&(((s5=='D'&&s6=='F')||(s5=='F'&&s6=='D'))||((s5=='A'&&s6=='B')||(s5=='A'&&s6=='C'))||((s5=='B'&&s6=='C')||(s5=='B'&&s6=='A'))||((s5=='C'&&s6=='A')||(s5=='C'&&s6=='B')))){
		cout<<1;
		f=1;
	}
	else cout<<0; 
	if(f==1&&(int(s5)+1==int(s6)||int(s5)==int(s6)+1))cout<<1;
	else cout<<0;
//	cout<<endl<<s3<<" "<<s4;
//	for(int i=1;i<=s1.size();i++){
//		cout<<s1[i];
//	}
	return 0;
}
