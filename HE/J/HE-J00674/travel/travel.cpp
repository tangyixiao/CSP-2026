#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
int f[5],g[5];
int s=0,h=0,k=0,l=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	
	
	for(int i=0;i<2;i++){
		char d=s1[i];
		char e=s2[i];
		f[i]=int(d);
		g[i]=int(e);
	}
	
	
	if(c1==c2  && c1!=1 && c1 !=16){
		s=1;
	}
	else s=0;
	
	
	for(int i=0;i<2;i++){
		if(f[i]==g[i]){
			h=1;
		}
		else h=0;
	}
	if(s1[2]>='A' && s1[2]<='C' && s2[2]>='A' && s2[2]<='C'){
		k=1;
	}
	else if(s1[2]>='D' && s1[2]<='F' && s2[2]>='D' && s2[2]<='F'){
		k=1;
	}
	else k=0;
	
	if(s1[2]+1 == s2[2] || s1[2]-1 == s2[2]){
		l=1;
	}
	else l=0;
	
	if(s==1){
		cout<<1;
	}
	else cout<<0;
	if(h==1 && s==1){
		cout<<1;
	}
	else cout<<0;
	if(k==1 && h==1 && s==1){
		cout<<1;
	}
	else cout<<0;
	if(k==1 && h==1 && s==1 && l==1){
		cout<<1;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
