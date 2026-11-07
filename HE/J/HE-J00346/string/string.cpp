#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n<=1)cout<<"0";
	int a[n];
	string c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==2&&c[1]!=c[2]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
