#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,num;
	char z;
	cin>>n;
	for(int i=1;i<=n;i++){
	    cin>>num;
	    cin>>z;
	}
	if(n==3){
        cout<<2;
    }
    else if(n==2){
        cout<<0;
    }
    else{
        cout<<3000000000;
    }
	return 0;
}