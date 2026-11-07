#include<bits/stdc++.h>
using namespace std;
const int Max_N=5e5+10;
int N,M;
int A[Max_N];
int Cnt[Max_N];
int Ans[Max_N];
int Last[Max_N];
void Out(int X){
	if(X>=10) Out(X/10);
	putchar(X%10+'0');
}
int read(){
	int f=1;
	int cur=0;
	char c;
	c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		cur=cur*10+(c^48);
		c=getchar();
	}
	return cur;
}
int Num[Max_N];
int C=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	N=read();
	M=read();
	for(int i=1;i<=N;i++){
		A[i]=read(); 
		Cnt[A[i]]++;
		Last[A[i]]=i;
	}
	for(int k=1;k<=M;k++) Num[++C]=Last[k];
	sort(Num+1,Num+C+1);
	for(int i=1;i<=C;i++){
		int j=Num[i];
		Ans[A[j]]+=Cnt[A[j]];
		Cnt[A[j+1]]+=Cnt[A[j]];
	}
	for(int i=1;i<=M;i++) Out(Ans[i]),cout<<" ";
	return 0;
}
