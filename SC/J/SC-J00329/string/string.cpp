#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c = 1,x = 0;
	cin >> n;
	string s[1000005];
	for(int i = 1;i<=n;i++){
		cin >> a >> b;
		for(int j = 1;j<=a;j++){
			s[c] = b;
			c += 1;
		}
	}
	if(c%2 == 0){
		for(int i = 1;i<=c%2;i++){
			if(s[i]==s[c-i+1]){
				x += 1;
			}
		}
	}
	else{
		for(int i = 1;i<=(c-1)%2;i++){
			if(s[i]==s[c-i+1]){
				x += 1;
			}
		}	
	}
	cout << x;

	return 0;
}