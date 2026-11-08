#include <bits/stdc++.h>
using namespace std;
string as,bs;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	int a;
	char c;
	cin >>n;
	for(int i=0 ; i<n ; i++){
		cin >>a>>c;
		for(int j=0 ; j<a ; j++){
			as+=c;
		}
	}
	for(int j=as.size()-1 ; j>=0 ; j--){
		bs+=as[j];
	}
	for(int i=0 ; i<as.size()/2 ; i++){
		if(bs[i]==as[i]){
			ans+=0;
		}
		else{
			ans++;
		}
	}
	cout <<ans;
	return 0;
}
