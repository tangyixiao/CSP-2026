#include<iostream>
using namespace std;
int main(){
	ifstream("card.in");
	outstream("card.out");
	int n,m;
	fin>>n>>m;
	int a[10001];
	for(int i=1;i<=n;i++){
		fin>>a[i];
	}
	int b[1000001]={0};
	for(int i=1;i<n;i++){
		for(int j=i;j<n;j++){
		if(a[j]==a[j+1]){
			b[j+1]++;
			if(j+1<i){
				b[i-1]++;
			}
		}
	}
	}
	for(int i=1;i<n;i++){
		if(b!=0)
		fout<<b[i];
	}
	ifstream.close();
	outstream.close();
	return 0;
}
