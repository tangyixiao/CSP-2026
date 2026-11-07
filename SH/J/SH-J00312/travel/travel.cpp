#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int p(char c){
	if(c<='D') return c-'A'+1;
	else return 5;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2)
		printf("0000");
	else if(s1[0]!=s2[0]||s1[1]!=s2[1])
		printf("1000");
	else{
		int a=p(s1[2]),b=p(s2[2]);
		if((a<=3&&b>3)||(a>3&&b<=3))
			printf("1100");
		else if(abs(a-b)>1)
			printf("1110");
		else
			printf("1111");
	}
	return 0;
}
