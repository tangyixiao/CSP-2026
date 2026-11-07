#include <iostream>
#include <string>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int num;
		char ch;
		cin >> num >> ch;
		for(int j = 0;j < num;j++)
			s.insert(s.length(),1,ch);
	}
	int ans = 0;
	for(int i = 0;i < (s.length()+1)/2;i++)
		if(s[i] != s[s.length()-i-1])
			ans++;
	cout << ans;
	return 0;
}
