#include <iostream>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n = 0,m = 0;
	string c,d;
	cin >> n;
	for(int i;i < n ;i++){
		int a = 0;
		string b;
		cin >> a >> b;
		for(int j = 0;j < a;i++){
			c = c + b;
		}
	}
	if(len(c) % 2 == 0){
		for(int k = 0;k < len(c)/2;k++){
			if(c[k] != c[-k]){
				m += 1;
			}
		}
	}
	if(len(c) % 2 == 1){
		d = c[len(c)-1];
		c = c[len(c)] + d;
		for(int k = 0;k < len(c)/2;k++){
			if(c[k] != c[-k]){
				m += 1;
			}
		}
	}
	cout << m;
}
