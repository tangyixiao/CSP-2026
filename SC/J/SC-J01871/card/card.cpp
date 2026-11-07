#include<bits/stdc++.h>
using namespace std;
inline int read(){
	int ret=0;bool opt=0;char in=getchar();
	while(!isdigit(in)){opt|=(in=='-');in=getchar();}
	while(isdigit(in)){ret=ret*10+(in^48);in=getchar();}
	return (opt?-ret:ret);
}
int lent,knum;
int tpre[500010];
int tsuc[500010];
int itms[500010];
int sumt[500010];
int rett[500010];
deque<int>que;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	lent=read();knum=read();
	for(int i=1;i<=lent;i+=1)tsuc[i]=i+1;
	for(int i=1;i<=lent;i+=1){
		int v=read();itms[i]=v;
		if(tpre[v])tsuc[tpre[v]]=i;tpre[v]=i;
	}for(int i=1;i<=knum;i+=1)tpre[i]=lent+1;
	for(int i=1;i<=lent;i+=1){
		if(tpre[itms[i]]>i)sumt[i]+=1;
		if(tpre[itms[i]]>tsuc[i])tpre[itms[i]]=tsuc[i];
		sumt[tsuc[i]]+=sumt[i];
		rett[itms[i]]+=sumt[i];
	}for(int i=1;i<knum;i+=1){
		printf("%d ",rett[i]);
	}printf("%d",rett[knum]);return 0;
}