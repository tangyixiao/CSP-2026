#include <iostream>
#include <string>

using namespace std;

long long n, l[200005], ans;
char c[200005];
string a, b;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> l[i] >> c[i];
		string tmp(l[i], c[i]);
		a += tmp;
	//	cout << l[i] << " " << c[i] <<" " << tmp <<endl;
	}
	for(int i = n;i;i--){
		string tmp(l[i], c[i]);
		b += tmp;
	}
//	cout << a << endl << b <<endl;
	for(int i = 0;i < a.size();i++){
		if(a[i] != b[i]){
		//	cout << i << " ";
			ans++;
		}
	}
	cout << ans / 2;
//	cout <<endl <<check;
	return 0;
}
