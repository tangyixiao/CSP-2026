#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string s="";
	for (int i=1;i<=n;i++){
		int a;
		char c;
		cin >> a >> c;
		for (int j=1;j<=a;j++){
			s+=c;
		}
	}
	int sum=0;
	if (s.size()%2==0){
		string b=" ";
		for (int i=s.size()/2-1;i>=0;i--){
			b+=s[i];
		}
		for (int i=1;i<=s.size()/2;i++){
			if (b[i]!=s[i+s.size()/2-1]){
				sum++;
			}
		}
		cout << sum;
		return 0;
	}
	else{
		string b=" ";
		for (int i=s.size()/2-1;i>=0;i--){
			b+=s[i];
		}
		for (int i=1;i<=s.size()/2;i++){
			if (b[i]!=s[i+s.size()/2]){
				sum++;
			}
		}
		cout << sum;
		return 0;
	}
}
