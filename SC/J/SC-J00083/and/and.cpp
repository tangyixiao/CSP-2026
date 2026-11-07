#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int e;
	string d[1000]={};
	string a[1000]={};
	string l[11]={};
	for(int i=1;i<=n;i++){
		cin>>e;
		a[i-1]=e;
	}
	for(int o=0;o<n-1;o++){
		d[o]=a[o] & a[o+1];
	}
	for(int h=0;h<n-1;h++){
		if(d[h]<d[h+1]){
			l[0]=d[h+1];
		}
	}
	cout<<l[0];
	return 0;
	
}