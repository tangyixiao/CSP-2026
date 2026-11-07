#include <bits/stdc++.h>
#include <vector>
using namespace std;
int ai[200000];
char n[200000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,s=0,min=0;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>ai[i]>>n[i];
	}
	for(int i=0;i<a;i++){
		s+=ai[i];
	}
	vector<char>sum(s);
	for(int i=0;i<a;i++){
		for(int j=0;j<ai[i];j++){
			sum.push_back(n[i]);
		}
	}
	for(int i=0;i<=s/2;i++){
		if(sum[i]!=sum[s-i]){
			min++;
		}
	}
	cout <<min;
	return 0;
}