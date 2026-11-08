#include <iostream>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,b =0,c = 0;
	cin >>m >>n;
	int a[n]
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int j = 0;j < n;j++){
		b = a[j];
		pow(2,b);
		a[j] = b
	}
	for(int k = 0;k < a;k++){
		for(int l = 0;l <a;l++){
			if(a[k]&&a[l] > c){
				c= a[k]&&a[l];
			}
		}
	}
	cout << c;
}
