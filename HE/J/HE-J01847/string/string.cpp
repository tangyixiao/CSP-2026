#include<bits/stdc++.h>
using namespace std;
int n;
int a,ans=0;
string hw,c;
int l=hw.size();
bool pdhw(string s){
	for(int i=0;i<l/2;i++){
		if(hw[i]!=hw[l-1]){
				return 0;
		}
	}
	return 1;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			hw+=c;
		}
	}
	if(pdhw(hw)){
		cout<<0;
	}else{
		for(int i=0;i<l/2;i++){
			if(hw[i]!=hw[l-1]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
