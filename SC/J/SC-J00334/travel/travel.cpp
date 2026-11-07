#include<bits/stdc++.h>
using namespace std;
int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+(c-'0');
		c=getchar();
	}
	return x*f;
}

int c1,c2;
char s1[2+10],s2[2+10];
int num1,num2;
char id1,id2;
bool ans[4+10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	c1=read(); cin>>s1+1;
	num1=(s1[1]-'0')*10+s1[2]-'0'; 
	id1=s1[3];
	c2=read(); cin>>s2+1;
	num2=(s2[1]-'0')*10+s2[2]-'0'; 
	id2=s2[3];
	
	if(c1==c2) {
		ans[1]=1;
		if(num1==num2){
			ans[2]=1;
			if(id1<='C'&&id2<='C'||id1>='D'&&id2>='D'){
				ans[3]=1;
				if(abs(id1-id2)==1){
					ans[4]=1;
				}
			}
		}
	}
	for(int i=1; i<=4; i++){
		cout<<ans[i];
	}
    return 0;
}
