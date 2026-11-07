#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream fin("card.in");
	ofstream fout("card.out");
	int n,m;
	fin>>n>>m;
	int a[500000]={0};
	for(int i=0;i<n;i++){
		fin>>a[i]; }
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==i){cnt++;}}		
	for(int i=0;i<n;i++){
		fout<<cnt<<" "; }	
	return 0;
}
