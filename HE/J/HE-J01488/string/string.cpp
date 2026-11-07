#include <bits/stdc++.h>
using namespace std;
long long T; 
long long num = 0;
string str = " ";
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>T;
	for(int i = 1;i<=T;i++){
		long long number;
		string a;
		cin>>number>>a;
		for(int i = 1;i<=number;i++){
			str = str + a; 
		}
	}
	for(int i = 1,j = str.size()-1;i <= j;++i,--j){
		if(str[i] != str[j]){
			num = num + 1;
		}
	}
	cout<<num;
	return 0;
}
