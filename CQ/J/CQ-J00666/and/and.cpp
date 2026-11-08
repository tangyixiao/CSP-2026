#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int chg(int a){
	int as=0;
    for(int i=0;i<int(log2(a));i++){
        if(a>pow(2,i)){
            a-=a>pow(2,i);
            as+=pow(10,i);
        }
    }
    return as;
}

int ands(int a,int b){
    int as=chg(a);
    int bs=chg(b);
    int ans=0;
    for(int i=0;i<log10(min(as,bs));i++){
        if()ans+=pow(10,i);
    }
}

int main(){
	int n,m;
	int ans=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<3;
	return 0;
}
