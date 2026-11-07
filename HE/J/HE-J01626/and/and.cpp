#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	ifstream fin("and,in");
	ofstream fout("and.out");
	int n,m,a[1000000];
	fin>>n>>m;
	for(int i=0;i<n;i++){
		fin>>a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<=m;i++){
		int b=a[0]&&a[1]; }
	fout<<b;
	return 0;
}
