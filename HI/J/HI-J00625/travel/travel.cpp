#include<bits/stdc++.h>
using namespace std;
long long n,m;
char s;
long long a,b;
char c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> n >> m >> s;
	cin >> a >> b >> c;
	if(n == a){
		cout << 1;
	}else{
		cout << 0;
	}
	if(m == b and s != c){
		cout << 1;
	}else{
		cout << 0;
	}
	long long x = int(s);
	long long y = int(c);
	if(x == 67 and y== 68){
		cout << 0;
	}else if(x == 68 and y== 67){
		cout << 0;
	}else{
		cout << 1;
	}
	if(x-y == -1 or x-y == 1){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}
