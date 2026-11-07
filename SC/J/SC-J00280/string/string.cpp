#include<bits/stdc++.h>
#define ll long long
#define un unsigned long long
using namespace std;
ll read(){
	char c=getchar(),fu=0;
	while(c<'0' || c>'9'){
		if(c=='-'){
			fu=1;
		}
		c=getchar();
	}
	ll num=0;
	while((c>='0') && (c<='9')){
		num*=10;
		num+=(c-'0');
		c=getchar();
	}
	return fu?(-1)*num:num;
}
void out(ll num){
	if(num<0){
		putchar('-');
		num*=-1;
	}
	if(num>=10){
		out(num/10);
		putchar((num%10)+'0');
	}
	else{
		putchar(num+'0');
	}
	return ;
}
struct node{
	ll a,st,ed;	//a为长度，st为起始位置，ed为结束位置 
	char c;
}f[200005];
int n,bg,en;		//bg为对称后区间所覆盖的第一个区间，en对称后区间所覆盖的最后一个区间
ll l,ret;
void find(node x){
	int l=1,r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(f[mid].ed<x.st){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
//		cout<<l<<' '<<r<<endl;
//		putchar('1');
	}
	bg=r+1;
	l=1,r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(f[mid].ed<x.ed){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	en=r+1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	f[0].ed=0;
	for(int i=1;i<=n;++i){
		f[i].a=read();
		f[i].st=f[i-1].ed+1;
		f[i].ed=f[i-1].ed+f[i].a;
		f[i].c=getchar();
//		getchar();
		l+=f[i].a;
	}
	int i=1;
	while(f[i].ed<=l/2){
		node x;
		x.st=l-f[i].ed+1;
		x.ed=l-f[i].st+1;
		x.a=f[i].a;
		x.c=f[i].c;
		find(x); 
//		cout<<x.st<<' '<<x.ed<<' '<<bg<<' '<<en<<endl;
		if(f[bg].c!=x.c && bg==en){
			ret+=x.ed-x.st+1;
		}
		else{
			if(f[bg].c!=x.c){
				ret+=f[bg].ed-x.st+1;
			}
			if(f[en].c!=x.c){
				ret+=x.ed-f[en].st+1;
			}
		}
		for(int j=bg+1;j<=en-1;j++){
			if(f[j].c!=x.c){
				ret+=f[j].a;
			}
		}
		i++;
	}
	if(f[i].st<l/2){
		node x;
		x.st=l/2+2;
		x.ed=l-f[i].st+1;
		x.a=f[i].a;
		x.c=f[i].c;
		find(x); 
//		cout<<bg<<' '<<en<<endl;
		if(f[bg].c!=x.c){
			ret+=f[bg].ed-x.st+1;
		}
		if(f[en].c!=x.c){
			ret+=x.ed-f[en].st+1;
		}
		for(int j=bg+1;j<=en-1;j++){
			if(f[j].c!=x.c){
				ret+=f[j].a;
			}
		}
	}
	out(ret);
	
}