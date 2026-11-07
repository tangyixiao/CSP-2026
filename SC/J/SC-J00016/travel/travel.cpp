#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int f=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		
	} 
	else cout<<0;
	int n=0;
	for(int i=0;i<=1;i++){
		int z=s1[i]-'0';
		n=n*10+z;
	}
	int m=0;
	for(int i=0;i<=1;i++){
		int r=s2[i]-'0';
		m=m*10+r;
	}
	if(n==m && c1==c2) cout<<1;
	else cout<<0;
	if((s1[2]>='A'&&s1[2]<='C') && (s2[2]>='A'&&s2[2]<='C') && c1==c2 && n==m){
		f=1;
		cout<<1;
	}	
	else if((s1[2]>='D'&&s1[2]<='F') && (s2[2]>='D'&&s2[2]<='F') && c1==c2 && n==m){
		f=1;
		cout<<1;
	}	
	else{
		f=0;
		cout<<0;
	}
	if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')&& f==1)
		cout<<1;
	else if((s1[2]-1==s2[2]||s1[2]+1==s2[2])&&f==1) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 