#include<bits/stdc++.h>
using namespace std;
int fan(string x){
	string y={};
	for(int i=x.size()-1;i>=0;i--){
		y+=x[i];
	}
	if(y==x){
		return 0;
	}else{
		int cnt=0;
		for(int i=0;i<x.size();i++){
			if(x[i]!=y[i]){
				cnt++;
			}
		}
		return cnt/2;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a={};
	char  c;
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>c;
		for(int j=1;j<=m;j++){
			a+=c;
		}
	}
	cout<< fan(a);
}
