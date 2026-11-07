#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int h=0,h1=0,k=0,k1=0;
	for(int i=0;i<c1.size();i++) h=h*10+(c1[i]-'0');
	for(int i=0;i<c2.size();i++) h1=h1*10+(c2[i]-'0');
	if(h==h1) cout<<1;
	else cout<<0;
	for(int i=0;i<2;i++) k=k*10+s1[i];
	for(int i=0;i<2;i++) k1=k1*10+s2[i];
	if(h==h1){
		if(k==k1) cout<<1;
	    else cout<<0;
	}
	else cout<<0;
	char c=s1[2],o=s2[2];
	if(h==h1){
	    if(k==k1){
		   if(c<'D'&&o<'D') cout<<1;
	       else if(c>='D'&&o>='D') cout<<1;
	       else cout<<0;
		}
		else cout<<0;
	}
	else cout<<0;
	if(h==h1){
	    if(k==k1){
		   if(c<'D'&&o<'D'&&abs(c-o)==1) cout<<1;
	       else if(c>='D'&&o>='D'&&abs(c-o)==1) cout<<1;
	       else cout<<0;
	   }
	   else cout<<0;
    }
    else cout<<0;
	return 0;
} 
