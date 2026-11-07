#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	bool d=1;
	char s[5];
	char k[5];
	cin>>a>>s>>b>>k;
	if(a==b)
		cout<<1;
	else{
		d=0;
		cout<<0;
	}    
	if(d&&s[0]==k[0]&&s[1]==k[1])
		cout<<1;	
	else{
		cout<<0;
		d=0;
	}	
	if(d&&((s[2]>='D'&&k[2]>='D')||s[2]<='C'&&k[2]<='C'))
	    cout<<1;
	else{
		d=0;
		cout<<0;
	}    
	if(d&&abs(s[2]-k[2])==1&&(s[2]!='C'||s[2]!='D'||k[2]!='C'||k[2]!='D'))
	    cout<<1;
	else
	    cout<<0;
	return 0;
}