#include<bits/stdc++.h>
using namespace std;
char c1[3],c2[3],s1[4],s2[4];
int k=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	//cout<<c1<<" "<<s1<<" "<<c2<<" "<<s2<<'\n';
	bool c=1;
	for(int i=0;i<=1;i++){
		if(c1[i]!=c2[i]){
			c=0;
			break;
		}
	}
	bool f=1;
	if(c==0)f=0;
	for(int i=0;i<=1&&c==1;i++){
		//cout<<s1[i]<<" "<<s2[i]<<" ";
		if(s1[i]!=s2[i]){
			f=0;
			
			break;
		}
	}
	//cout<<'\n';
	bool g=0,l=0;
	if(c==1&&f==1&&s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')g=1;
	else if(c==1&&f==1&&s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')g=1,l=1;
	if(c==1&&g==1&&l!=1&&((s1[2]=='A'&&s2[2]=='B')||(s2[2]=='A'&&s1[2]=='B')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')))l=1;
	cout<<c<<f<<g<<l;
	return 0;
} 
