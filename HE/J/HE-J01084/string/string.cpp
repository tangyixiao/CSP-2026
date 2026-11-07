#include <bits/stdc++.h>
using namespace std;
int n;
struct st{
	int s;
	string w;
}r[500005], b[500005] ;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> r[i].s >> r[i].w;
		b[i].s = r[i].s;
		b[i].w = r[i].w;
	}
	int a = 0;
	for(int i = 1 ; i <= n / 2 ; i++){
		if(b[i].w != r[i].w){
			a += min(b[i].s, r[i].s);
		}
	}
	if(n % 2 == 3 && r[(n + 1)/ 2].s % 2 == 0){
		a++;
	}
	cout << a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
