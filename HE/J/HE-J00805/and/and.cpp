#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n ,m ,a ,maxa = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a;
		maxa = max(a,maxa);
	}
	if(m == 1)cout << maxa;
	else cout << 2;
	return 0;
}
