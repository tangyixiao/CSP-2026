#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
char p,q;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %d%c %d %d%c",&a,&b,&p,&c,&d,&q);
	if(a==c){
		cout<<1;
		if(b==d){
			cout<<1;
			if(('A'<=p&&p<='C'&&'A'<=q&&q<='C')||('D'<=p&&'E'>=p&&'D'<=q&&'E'>=q)){
				cout<<1;
				if((p=='A'&&q=='B')||(p=='B'&&(q=='A'||q=='C'))||(p=='C'&&q=='B')||(p=='D'&&q=='F')||(q=='D'&&p=='F')){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}