#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum = 0;
	string s = "";
	int a,x;
	char y;
	scanf("%d",&a);
	int b[a+3];
	for (int i = 1;i <= a;i++){
		cin >> x >> y;
		for (int j = 1;j <= x;j++){
			s += y;
		}
	}
	for (int i = 0;i < s.length()/2+1;i++){
		if (s[abs(s.length()-i-1)] != s[i]){
			sum++;
			s[abs(s.length()-i-1)] = s[i];
		}
	}
	cout << sum; 
	return 0;
}
