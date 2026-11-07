#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector

ll c1,s1,c2,s2;
char s01,s02;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	scanf("%lld%lld%c%lld%lld%c",&c1,&s1,&s01,&c2,&s2,&s02);
	
	//cout<<c1<<s1<<s01<<c2<<s2<<s02;
	/*
	printf("%d%d%d%d",
	
		//1
		c1==c2,
		//2
		c1==c2  &&  s1==s2,
		//3
		c1==c2  &&  s1==s2  &&  (s01=='F'&&s02=='D'        ||       s01=='D'&&s02=='F'      
								||     s01!='F'&&s02!='F'&&s01!='D'&&s02!='D'),
		//4
		c1==c2  &&  
	);*/
	if(c1!=c2){//1
		printf("0000");
		return 0;
	}
	printf("1");
	if(s1==s2){//2
		printf("1");
		if(s01=='F'&&s02=='D'||//3
       		s01=='D'&&s02=='F'||
     		s01!='F'&&s02!='F'&&s01!='D'&&s02!='D'){
     			printf("1%d",
				 	//4
				 	!(s01=='C'&&s02=='D'   ||   s01=='D'&&s02=='C')&&
				 	(s1-1==s2||s2-1==s1)
				 );
     			
     			
			}
     	else 
		 	printf("00");
	}
	else 
		printf("000");
	
	
	//4
	/*
	if((s1-1==s2||s2-1==s1)&&)
		printf
		if(')printf("0");
       	else 
		   printf("%lld",s01+1==s02||s02+1==s01);
	
	//else printf("0");*/
	
	
	return 0;
}

