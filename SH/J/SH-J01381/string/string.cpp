#include <iostream>//01381 
#include <cmath>
#include <string>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	string x;
	long long n;
	cin >> n;
	for (long long i = 1; i <= n; i ++) {
		long long nm;
		cin >> nm;
		string a;
		cin >> a;
		for (long long j = 1; j <= nm; j ++) {
			x += a;
		}
	}
	long long cnt=0;
	for (long long i = 0; i < x.size();i ++){
		if(x[i] !=x[x.size()-1-i])cnt++; 
	}
	cout << cnt/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
