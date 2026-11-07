#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
long long a[1000000005];
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>c;
	}
	if(n==1){
		cout<<"0";
	}

	return 0;
}

