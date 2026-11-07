#include <bits/stdc++.h>
using namespace std;

int d(int x,int y){
	int ans;
	string a;
	string b;
	int s = 0;
	while(x!=0){
		x = x/2;
		a[s] = x%2;
		s++;
	}
	int sy = 0;
	while(y!=0){
		y = y/2;
		a[sy] = y%2;
		sy++;
	}
	for(int i = max(s,sy)-1;i>=0;i--){
		if(a[i]==b[i]){
			ans = ans + 1*2^(max(s,sy)-i);
		}
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cout << d(12,15);
	return 0;
}

