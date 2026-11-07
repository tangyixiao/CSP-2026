#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	char b[n];
	vector<char>p;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			p.push_back(b[i]);
		}
	}
	int sum=0;
	for(int i=0;i<p.size()/2;i++){
		if(p[i]!=p[p.size()-i-1])sum++;
	}
	cout<<sum;
	return 0;
}
/*
3
2 a
2 b
1 c
*/
