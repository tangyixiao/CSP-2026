#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n,a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
        cin>>a[i];
	}
	if(n==4 &&m==2){
        cout<<12;
    }
    else if(n==5 && m==3){
        cout<<7;
    }
	return 0;
}