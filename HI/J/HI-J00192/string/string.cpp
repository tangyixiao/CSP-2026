#include <bits/stdc++.h>
using namespace std;

struct ST{
	long long x;
	char c;
};
ST a[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i].x >> a[i].c;
		cnt += a[i].x;
	}
	int i = 1;
	int j = n;
	bool flag = true;
	while(i < j){
		if(!(a[i].c == a[j].c && a[i].x == a[j].x)) 
			flag = false;
		if(flag == false) 
			break;
		i++;
		j--;
	}
	i = 1;
	if(flag == true){
		cout << 0;
		return 0;
	}
	cout << cnt / 2;
	return 0;
}
