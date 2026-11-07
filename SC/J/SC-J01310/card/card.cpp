#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5,M = 3e5+5;
int n,m;
int card[N],last[N];
map<int,int>ans;
int read(){
	int x = 0,f = 1;
	char c = getchar();
	while(c < '0' || c > '9'){
		if(c == '-'){
			f *= -1;
		}
		c = getchar();
	}
	while('0' <= c && c <= '9'){
		x = (x<<1)+(x<<3)+(c-'0');
		c = getchar();
	}
	return x*f;
}
void write(int x){
	if(x >= 10)write(x/10);
	char c;
	c = (x%10)+'0';
	putchar(c);
}
void init(){
	n = read(),m = read();
	for(int i = 1;i <= n;i++){
		card[i] = read();
//		printf("%d ",last[card[i]]);
		last[card[i]] = i;
	}
}
void check(int x){
//	keep[x].num = new int[n-x+2];
//	keep[x].lens = n-x+1;
//	if(x == last[card[x]]){
//			for(int j = 1;j <= keep[x-1].lens;j+){
//				keep[x].num[j] = keep[x-1].num[j];
//				ans[keep[x-1].num[j]]++;
//			}
//			ans[card[x]]++;
//			return;
//	}
//	for(int i = last[carsd[x]]+1;i <= n;i++){
//		if(i == last[card[i]])
//	}
	
	for(int i = x;i <= n;i++){
		i = last[card[i]];
		ans[card[i]]++;
//		printf("%d:%d %d\n",card[i],edge[j].from,edge[j].to);
	}
}
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    init();
    for(int i = n;i >= 1;i--){
    	check(i);
	}
	for(int i = 1;i <= m;i++){
		write(ans[i]);
		printf(" ");
	}
	return 0;
}
