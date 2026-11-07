#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char s[90];
	for(int i=1;i<=90;i++){
		cin >> s; 
	}
	for(int i=1;i<=4;i++){
		if(s[i]-s[i+1]<=1&&s[i]+s[i+1]>=1){
			cout << "1";
		}else {
			cout << "0";
		}
	}
	return 0;
}
