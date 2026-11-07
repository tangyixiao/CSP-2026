#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b;
int c,d;
int e,f; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<c1.size();i++) a=a*10+c1[i]-'0';
	for(int i=0;i<c2.size();i++) b=b*10+c2[i]-'0';
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='A'&&s1[i]<='Z') e=s1[i]-'A'+1;
		else c=c*10+s1[i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]>='A'&&s2[i]<='Z') f=s2[i]-'A'+1;
		else d=d*10+s2[i]-'0';
	}
	if(a==b) cout<<1;
	else cout<<0;
	if(c==d&&a==b) cout<<1;
	else cout<<0;
	if((c==d&&e<=3&&f<=3&&a==b)||(c==d&&e>=4&&f>=4&&a==b)) cout<<1;
	else cout<<0;
	if((e+1==f||e==f+1)&&c==d&&a==b){
		if((e<=3&&f<=3)||(e>=4&&f>=4)) cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
}
