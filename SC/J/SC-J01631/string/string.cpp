#include<bits/stdc++.h>
using namespace std;
int n,a;char c; string S;
int main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		S+=string(a,c); 
	}
	int l=0,r=S.size()-1,cnt=0;
	while(l<=S.size()/2-1){
		l++,r--;
		if(S[l]!=S[r])cnt++;
	}
	cout<<cnt;
	return 0;
}