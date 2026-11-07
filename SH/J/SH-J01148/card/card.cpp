#include<iostream>
using namespace std;
int a[500005],table[500005],ton[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	if(m==1){
		if(n%2==0)cout << 0;
		else cout << n;
	}
	return 0;
}
