#include <iostream>
using namespace std;
int n,a,b,num=0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		if(a==b){
			num=i;
		}
	}
	cout<<num;
	return 0;
}