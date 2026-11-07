#include<bits/stdc++.h>
using namespace std;

string a1,a,b1,b;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> a >> b1 >> b;
	if(a1!=b1){puts("0000");return 0;}
	if(a[0]!=b[0]||a[1]!=b[1]){puts("1000");return 0;}
	int x=a[2]-'A', y=b[2]-'A';
	if(x<=2&&y>2 || x>2&&y<=2){puts("1100");return 0;}
	if(abs(x-y)!=1){puts("1110");return 0;}
	puts("1111");
	return 0;
}
//水 