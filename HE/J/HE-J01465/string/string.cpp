#include<bits/stdc++.h>
using namespace std;
int hw(string x){
	string y;
	int cnt=0;
	for(int i=x.size()-1;i>=0;i--){
		y=y+x[i];
	}
	if(y!=x){
		int i;
		for(i=0;i<x.size()/2;i++){
			if(y[i]!=x[i]){
				cnt++;
			}
		} 
		return cnt;
	}
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int c;
	char b;
	string a; 
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c>>b;
		for(int i=0;i<c;i++){
			a=a+b;
		}
	} 
	cout<<hw(a);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
