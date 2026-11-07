#include<bits/stdc++.h>
using namespace std;
int n1,n2,a,b,c,d;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d",&n1);
	cin>>s1;
	scanf("%d",&n2);
	cin>>s2;
	if(n1==n2){
		a=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			b=1;
			if((s1[2]=='F'&&s1[2]=='D')||(s1[2]=='D'&&s1[2]=='F')){
				c=1;
				d=1;
			}
			else if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')){
				c=1;
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')){
					d=1;
				}
			}
		}
	}
	printf("%d%d%d%d",a,b,c,d);
	return 0;
}
