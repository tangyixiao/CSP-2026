#include <bits/stdc++.h>
using namespace std;
string b , c[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","out",stdout);
	long long n , a , num = 0; 
	bool flag = false;
	cin >> n ;
	for(int i = 0 ;i < n ; ++i){
		cin >> a;
		cin >> b ;
		num += a;
		for(int j = 0 ; j < a ; ++j){
			if(i != 0){
				c[i + j + 1] = b;
			}
			else{
				c[i+j] = b;
			}
		}
		if(i >= 1){
			if(c[i] == c[i - 1]){
				flag = true;
			}
			else{
				flag = false;
			}
		}
	}
	if(flag == true){
		cout << 0;
	}
	long long l = num / 2 , r = num / 2 + 1 , cnt = 0;
	for(int i = 0 ; i < num / 2 ; ++i){
		if(c[l] != c[r]){
			cnt++;
		}
		l--;
		r++;
	}
	cout << cnt;
	return 0;
}
