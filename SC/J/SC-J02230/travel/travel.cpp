#include<bits/stdc++.h>
using namespace std;
int a1,a2,b1,b2,c1,c2;
string s;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int _=1;_<=4;_++){
		cin>>s;
		int p1=0,p2=0;
		for(int i=0;i<(int)s.size();i++){
			char ch=s[i];
			if(ch>='0' && ch<='9') p1=p1*10+ch-'0';
			else {
				if(ch=='D') p2=ch-'A'+1;
				else p2=ch-'A';
			}
		}
		if(_==1) a1=p1;
		else if(_==2) b1=p1,c1=p2;
		else if(_==3) a2=p1;
		else b2=p1,c2=p2;
	}
	if(a1==a2){
		printf("1");
		if(b1==b2){
			printf("1");
			if((c1<=2 && c2<=2) || (c1>=4 && c2>=4)){
				printf("1");
				if(abs(c1-c2)==1) printf("1\n");
				else printf("0\n");
			} else printf("00\n");
		} else printf("000\n");
	} else printf("0000\n");
	return 0;
}