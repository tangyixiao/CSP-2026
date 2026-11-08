#include<bits/stdc++.h>
using namespace std;
int c,s;
string C,S;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c>>C>>s>>S;
	if(c==s){
		printf("1");
		if(C[0]==S[0]&&C[1]==S[1]){
			printf("1");
			char c1=C[2],s1=S[2];
			if(c1>='A'&&c1<='C'){
				if(s1>='A'&&s1<='C') printf("1");
				else  printf("0");
			}else{
				if(s1=='D'||s1=='F') printf("1");
				else  printf("0");
			}
			if((c1=='A'&&s1=='B')||(c1=='B'&&s1=='A')||(c1=='B'&&s1=='C')||(c1=='C'&&s1=='B')||(c1=='D'&&s1=='F')||(c1=='F'&&s1=='D'))
				printf("1");
			else printf("0");
		}
		else printf("000");

	}
	else printf("0000");

	return 0;
}
//Trick||Treat!
