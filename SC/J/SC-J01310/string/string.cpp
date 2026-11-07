#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
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
char inputt(){
	char c = getchar();
	while(c < 'a' || c > 'z')c = getchar();
	return c;
}
void write(__int128 x){
	if(x >= 10)write(x/10);
	char c;
	c = (x%10)+'0';
	putchar(c);
}
int n;
__int128 ans;
struct Str{
	int number;
	char character;
}str[N];
void init(){
	n = read();
	for(int i = 1;i <= n;i++){
		str[i].number = read();
		str[i].character = inputt();
	}
}
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    init();
    int top = 1,button = n;
    while(top < button){
    	int del = min(str[top].number,str[button].number);
    	str[top].number -= del,str[button].number -= del;
    	if(str[top].character != str[button].character)ans += del;
    	if(!str[top].number)top++;
    	if(!str[button].number)button--;
	}
	write(ans);
	return 0;
}
