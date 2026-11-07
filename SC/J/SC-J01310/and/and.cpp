#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n,m,arr[N],maxx;
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
bool cmp(int a,int b){
	return a > b;
}
void init(){
	n = read(),m = read();
	for(int i = 1;i <= n;i++){
		arr[i] = read();
		maxx = max(maxx,arr[i]);
	}
	sort(arr+1,arr+n+1,cmp);
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    init();
    printf("%d",arr[m]);
	return 0;
}