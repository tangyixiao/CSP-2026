#include <iostream>
#include <string>
using namespace std;
int a[200005];
string c[200005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> c[i];
	}
	string s;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < a[i];j++){
			s += c[i];
		}
	}
	string m;
	bool flag = false;
	m = s[s.length() / 2];
	if(s.length() % 2 == 1){
		flag = true;
	}
	string c1,c2;
	flag = true;
	for(int i = 1;i < n;i++){
		if(c[i] == c[i - 1]){
			flag = true;
		}
		else{
			flag = false;
			break;
		}
	}
	if(flag == true){
		cout << 0;
		return 0;
	}
	flag = true;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == s[n - i]){
			flag == false;
			cnt++;
		}
	}
	if(flag == true && cnt == 0){
		cout << s.length() / 2;
	}
	else{
		cout << s.length() / 2 - cnt;
	}
	return 0;
}
