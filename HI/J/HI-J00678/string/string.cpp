#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int a;char c;
		cin >> a >> c ;
		while(a){
			s += c;
			a--;
		}
	}
	int z = s.size(),sum=0;
	for(int i = 0; i <= z/2; i++){
		if(s[i] != s[z-i-1]){
			sum++;
		}
	}
	cout << sum;
	return 0;
}
