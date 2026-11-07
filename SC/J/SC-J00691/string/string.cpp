#include <iostream>
using namespace std;

int main(){
	string c[1000];
	int a=0,n=0,l=0;	
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> i >> c[i];
		l=i;	
	}
	if(n-l<=0)
		cout << a;
	else
		a = n/(l/2);
	return 0;
}

