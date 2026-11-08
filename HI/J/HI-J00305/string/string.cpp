#include <iostream>
#include <string>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	long long a;
	string s, c;
	for(int i = 1;i<=n;i++){
		cin >> a >> c;
		for(int i = 1;i<=a;i++){
			s+=c;
		}
	}
	long long sum=0;
	int l=s.size();
	string z;
	for(int i = l-1;i>=0;i--){
		z+=s[i];
	}
	if(s==z){
		cout << "0";
	}
	else{
		for(int i = l-1;i>=0;i--){
			if(z[i] != s[i]){
				sum++;
			}
		}
		sum/=2;
		cout << sum;
	}
	return 0;
}
