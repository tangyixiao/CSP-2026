#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static inline int read(){
	int res=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9') res=(res<<3)+(res<<1)+c-'0',c=getchar();
	return res*f;
}

static inline void write(int x){
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10+'0');
}

string c1,c2,s1,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	if(c1==c2){
		printf("1");
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			printf("1");
			if(s1[2]<'D'&&s2[2]<'D'||s1[2]>='D'&&s2[2]>='D'){
				printf("1");
				if(abs(s1[2]-s2[2])==1) printf("1");
				else printf("0");
			}else printf("00");
		}else printf("000");
	}else printf("0000");
	
	putchar('\n');
	
	return 0;
}
//while(1) rp++;