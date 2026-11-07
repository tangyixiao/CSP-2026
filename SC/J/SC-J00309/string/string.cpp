#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cou = 0;;
	cin >> n;
	string str = "";
	for(int i = 0; i < n; i++){
		long long a;
		string wword;
		cin >> a;
		cin >> wword;
		for(int j = 0; j < a; j++){
			str = str + wword;
		}
	}
	string str_reverse1 = str;
	reverse(str_reverse1.begin(),str_reverse1.end());
	if(str == str_reverse1){
		cout << cou;
		return 0;
	}else{
		for(int i = 0; i < str.size(); i++){
			if(str[i] != str_reverse1[i]){
				cou++;
			}
		}
	}
	cout << cou/2;
	return 0;
} 