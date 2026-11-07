#include <bits/stdc++.h>
using namespace std;
char c[10];
char s[10];
char k[10];
char h[10];
char a[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c >> s;
	cin >> k >> h;
	if(c[0]==k[0]&&c[1]==k[1]){
		a[1]='1';
		if(s[0]==h[0]&&s[1]==h[1]){
			a[2]='1';
			if((s[2]>='A'&&s[2]<='C'&&h[2]>='A'&&h[2]<='C')){
				a[3]='1';
				if(abs(s[2]-h[2])==1){
					a[4]='1';
				}
			}
			if(((s[2]=='D'||s[2]=='F')&&(h[2]=='D'||h[2]=='F'))){
				a[3]='1';
				a[4]='1';
			}
		}
	}
	for(int i=1;i<=4;i++){
		if(a[i])cout << 1;
		else cout << 0;	
	}
	return 0;
}
