#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <stdalign.h>
#include <stdarg.h>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
using namespace std;
int n, m, dl = 0, a[500005] = {}, desk[500005] = {}, ans[500005] = {}, mmy[500005] = {};
void put(int c){
	if(dl == 0){
		desk[++dl] = c;
	}
	for(int i = 1; i <= dl; i++){
		if(desk[i] == c){
			dl = i;
			for(int j = i + 1; j <= dl; j++){
				desk[j] = 0;
			}
			return;
		}
	}
	desk[++dl] = c;
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			put(a[j]);
		}
		for(int j = 1; j <= dl; j++){
			if(desk[j] != 0 && mmy[desk[j]] == 0){
				ans[desk[j]]++;
				mmy[desk[j]] = 1;
			}
		}
		memset(desk, 0, sizeof(desk));
		memset(mmy, 0, sizeof(mmy));
		dl = 0;
	}
	for(int i = 1; i <= n; i++){
		if(ans[i] != 0)
			cout << ans[i] << ' ';
	}
	return 0;
}