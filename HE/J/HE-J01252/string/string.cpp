#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct awa{
	long long a;
	char b;
};
awa s[N] , d[N];
int n , r , l , mi , mo;
long long m;
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> s[i].a >> s[i].b ;
	}
	m = 0;
	l = 1;
	r = n;
	while(l < r){
		if(s[l].b != s[r].b ){
			if(s[l].a - mo > s[r].a - mi){
				mo += s[r].a - mi;
				m += s[r].a - mi;
				mi = 0;
				r--;
			}else if(s[l].a - mo < s[r].a - mi){
				mi += s[l].a - mo;
				m += s[l].a - mo;
				mo = 0;
				l++;
			}else{
				m += s[l].a - mo;
				mo = 0;
				mi = 0;
				l++;
				r--;
			}
		}else{
			if(s[l].a - mo > s[r].a - mi){
				mo += s[r].a - mi;
				mi = 0;
				r--;
			}else if(s[l].a - mo < s[r].a - mi){
				mi += s[l].a - mo;
				mo = 0;
				l++;
			}else{
				mo = 0;
				mi = 0;
				l++;
				r--;
			}
		}
	}
	cout << m;
	return 0;
} 
