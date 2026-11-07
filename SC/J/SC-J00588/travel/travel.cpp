#include<bits/stdc++.h>
int c1,c2,s1,s2;
char ch1,ch2;
void read(int &a){
	char ch=getchar();
	while(ch<'0'||ch>'9')ch=getchar();
	a=(ch-'0')*2+getchar()-'0';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	read(c1);
	read(s1);
	ch1=getchar();
	read(c2);
	read(s2);
	ch2=getchar();
	if(c1==c2){
		printf("1");
		if(s1==s2){
			printf("1");
			if(!((ch1<='C')^(ch2<='C'))){
				printf("1");
				if(std::abs(ch1-ch2)==1)printf("1\n");
				else printf("0\n");
			}
			else printf("00\n");
		}
		else printf("000\n");
	}
	else printf("0000\n");
}