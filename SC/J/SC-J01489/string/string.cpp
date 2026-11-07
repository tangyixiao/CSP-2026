#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string q;
	for(int i=0;i<n;i++){
		int x;
		string y;
		cin>>x>>y;
		for(int j=0;j<x;j++){
			q+=y;
		}
	}
	long long sum=0;
	int j=q.size()-1;
	for(int i=0;i<q.size()/2;i++){
		if(q[i]!=q[j]){
			sum++;
		}
		j--;
	}
	cout<<sum;
	return 0;
}