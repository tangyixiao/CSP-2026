#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int ret=0;bool opt=0;char in=getchar();
	while(!isdigit(in)){opt|=(in=='-');in=getchar();}
	while(isdigit(in)){ret=ret*10+(in^48);in=getchar();}
	return (opt?-ret:ret);
}
int lent,knum;
int itms[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	lent=read();knum=read();
	for(int i=1;i<=lent;i+=1){
		itms[i]=read();
	}int ret=0,sum=0;
	for(int i=30;i>=0;i-=1){
		for(int j=1;j<=lent;j+=1){
			int v=itms[j];
			if((v>>i)&1)sum+=1;
		}if(sum>=knum){
			for(int j=1;j<=lent;j+=1){
				int v=itms[j];
				if(!((v>>i)&1))itms[j]=0;
			}ret|=(1<<i);
		}sum=0;
	}printf("%d\n",ret);
	return 0;
}