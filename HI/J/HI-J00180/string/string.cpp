#include <iostream>
#include <string> 
using namespace std;
int main(){
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout); 
    int a;
	cin >> a;
	string c; 
	long long n=0;
	for (int i=1;i<=a;i++){
		int d;
		string e;
		cin >> d >> e; 
		n+=d;
		for (int j=1;j<=d;j++){
			c+=e;
		}
	}
	long long ans=0;
	for (int i=0;i<=n/2;i++){
		if (c[i]!=c[n-(i+1)]){
			ans++;
		}
	}
	cout << ans; 
	return 0;
} 
