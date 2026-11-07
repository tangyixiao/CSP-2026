#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
string c1,s1,c2,s2;
//static inline void read(int &x){
//	x=0;
//	int f=1;
//	char c=getchar();
//	for(;c<'0'||c>'9';c=getchar()){
//		if(c=='-')f=-1;
//	}for(;c>='0'&&c<='9';c=getchar()){
//		x=(x<<1)+(x<<3)+c-'0';
//	}x*=f;
//}static inline void write(int x){
//	if(x<0){
//		x=-x;
//		putchar('-');
//	}if(x>9)write(x/10);
//	putchar(x%10+'0');ac
//}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		putchar('1');
	}else{
		cout<<"0000";
		return 0;
	}if(s1[0]==s2[0]&&s1[1]==s2[1]){
		putchar('1');
	}else{
		cout<<"000";
		return 0;
	}if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
		putchar('1');
	}else{
		cout<<"00"; 
		return 0;
	}if(abs(int(s1[2]-s2[2]))==1){
		putchar('1');
	}else{
		putchar('0');
	}
	return 0;
} 