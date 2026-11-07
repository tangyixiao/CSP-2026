#include<iostream>
using namespace std;
int main(){
	ifstream("and.in");
	outstream("and.out");
	int n,m;
	fin>>n>>m;
	int a[20001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	char b[2000];
	for(int i=0;i<n;i++){
		for(int j=0;j<(a[i]+1)/2;j++){
		if(a[i]%2==1){
			b[i]+='1';
		}
		else{
			b[i]+='0';
		}
		a[i]=a[i]/2;
	}
	fout<<b[i];
	}
	ifstream.close();
	outstream.close();
	return 0;
}
