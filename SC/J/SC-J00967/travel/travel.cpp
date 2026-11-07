#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,n;
	int a,b; 
 	cin>>a>>s>>b>>n;
 	int x=(s[0]-48)*10+s[1]-48,y=(n[0]-48)*10+n[1]-48;
 	if(a==b)
 		if(x==y)
 			if((s[2]>='D'&&n[2]>='D')||(s[2]<'D'&&n[2]<'D'))
 				if(abs(s[2]-n[2])==1) printf("1111");
 				else printf("1110");
 			else printf("1100");
		else printf("1000"); 	
 	else printf("0000");
	return 0;
}