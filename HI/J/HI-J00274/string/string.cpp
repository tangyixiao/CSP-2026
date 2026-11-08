#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
class str{
	public:
		int start, end;
		char c;
}a[400005];
int n, ans = 0;
int len = 0;
void function(int end){
	int index;
	for(int i = 1; i <= n; ++i){
		if(a[i].start <= end && a[i].end >= end){
			index = i;
			break;
		}
	}
	if(a[index].end == end){
		return;
	}
	n++;
	a[n].start = end + 1;
	a[n].end = a[index].end;
	a[n].c = a[index].c;
	a[index].end = end;
}
bool cmp(str x, str y){
	return x.start < y.start;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	
	a[0].start = 0;
	a[0].end = 0;
	a[0].c = ' ';
	for(int i = 1; i <= n; ++i){
		int current_len;
		char current_c;
		cin >> current_len >> current_c;
		a[i].start = a[i-1].end + 1;
		a[i].end = a[i-1].end + current_len;
		a[i].c = current_c;
		len += current_len;
	}
	for(int i = 1; i < n; ++i){
		function(len - a[i].end);
		
	}
	sort(a + 1, a + n + 1, cmp);
	
	int halfn = n / 2;
	for(int i = 1; i <= halfn; ++i){
		if(a[i].c != a[n - i + 1].c){
			ans += a[i].end - a[i].start + 1;
		}
	}
	cout << ans;
	return 0;
}
/*
5
100 a
100 a
100 b
100 b
100 a

*/
