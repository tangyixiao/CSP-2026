#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt,num;
string str;
char c;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a >> c;
		for(int j = 0;j < a;j++){
			str += c;
		} 
		num += a;
	}
	for(int i = 0;i < num / 2;i++){
		if(str[i] != str[num - i - 1]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
