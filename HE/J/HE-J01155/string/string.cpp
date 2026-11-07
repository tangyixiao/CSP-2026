#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int q;
	cin>>q;
	string res="";
	while(q--){
		int n;
		char m;
		cin>>n>>m;
		while(n--){
			res+=m;
		}
	}int l=0;int ans=0;
	int r=res.size()-1;
	while(l<=r){
	if(res[l]!=res[r]){
		ans++;	
	}l++;
		r--;
}
	cout<<ans;
}
