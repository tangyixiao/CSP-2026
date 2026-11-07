#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return b>a;
}
int main(){
	ifstream fin("string.in");
	ofstream fout("string.out");
	int n,a[1000000000];
	char c[1000000000],b[1000000000],d[100000000];
	fin>>n;
	for(int i=0;i<n;i++){
		fin>>a[i];
		fin>>c[i];
		b[i]=c[i]*a[i];}
	int cnt=0;
	for(int i=0;i<n;i++){if(b[i]<b[i+1]){
			d[i]==b[i+1];
			d[i+1]==b[i];}}
	while(d!=b){if(d[cnt]!=b[cnt]){
			d[cnt]==b[cnt];
			cnt++;}}
	fout<<cnt;
	return 0;
}
