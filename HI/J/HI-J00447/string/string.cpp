#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n , cnt = 0;
ll sum = 0 , l , r;
ll a , b;
char y;
ll s[25555555];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a >> y;
		b = y - 'a' + 1;
		for(int j = 1 ; j <= a ; j++) s[cnt+j] = b;
		cnt+=a;
	}
	
	l = cnt / 2;
	r = l+1;
	if(cnt % 2 != 0) r++;
	
	for(int i = 0 ; i <= l-1 ; i++){
		if(s[l-i] != s[r+i]) sum++;
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
