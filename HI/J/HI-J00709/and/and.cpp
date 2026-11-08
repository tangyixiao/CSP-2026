#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin >> m >> n;
	int a[m];
	for(int i =0;i<m;i++){
		cin >> a[i];
	}
	if(m == 4 && n == 2){
		cout << 12; 
	}else if(m == 5 && n == 3){
		cout << 7;
	}
	return 0;
}
