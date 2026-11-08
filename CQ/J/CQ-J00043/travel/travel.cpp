#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
string s1,s2,c1,c2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) printf("0000");
	else{
		printf("1");
		int is1=(s1[0]-'0')*10+s1[1]-'0',is2=(s2[0]-'0')*10+s2[1]-'0';
		if(is1!=is2) printf("000");
		else{
			printf("1");
			if((s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C'))||
			   (s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))||
			   (s1[2]=='C'&&(s2[2]=='B'||s2[2]=='A'))||
			   (s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
				printf("1");
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B')||(s1[2]=='C'&&s2[2]=='B')||s1[2]=='D'||s1[2]=='F'){
					printf("1");
				}
				else{
					printf("0");
				}
			}
			else{
				printf("00");
			}
		}
	}
	return 0;
}

