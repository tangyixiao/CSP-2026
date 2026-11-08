#include <iostream>
#include <vector>
using namespace std;

int main (){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	
	vector<int> n,m;
	int a;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	
	for (int j = 1;j<=n;j++){
		if (a[i]&a[i-1]>a[i-1]&a[i-2]>a[i-3]&a[i-n]){
			cout <<a[i-n]&a[i-2];
		}
	}
}
