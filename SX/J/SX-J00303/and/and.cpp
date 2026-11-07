#include <bits/stdc++.h>
using namespace std;

int main(){
	//feropen("travel.in","r",stdin);
	//feropen("travel.out","w",stdout);
	int n , m,z=1;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> i;
		z+=i;


	}
	cout << z-7 ;
	return 0;
}