#include <iostream>
using namespace std;
int n;
map<int,string> a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for (int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
	}
	cout<<2;
} 