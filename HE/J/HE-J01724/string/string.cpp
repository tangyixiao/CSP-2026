#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;long long x,jjj,w=-1;char a;string s;
	long long js=0;
	cin>>n;
	while(n--){
		cin>>x;
		w+=x;
		cin>>a;
		while(x--){
				s+=a;
		}
	
	}jjj=w/2;int r=w;
	for(int l=0;l<=jjj;l++){
		if(s[l]!=s[r]){
		js++;	
		}r--;
	}
	cout<<js;
	return 0;
}
