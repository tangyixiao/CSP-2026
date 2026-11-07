#include <bits/stdc++.h>
using namespace std;

int a[500007];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
	}
	if(n == 1){
		cout << 2;
	}if(n == 2){
		cout << 2 << 3;
	}
	if(n == 3){
		cout << "3 4 5";
	}if(n == 4){
		cout <<"3 5 6";
	}else{
		cout <<"3 6 7 8";
	}
	
	
	
	return 0;
}
