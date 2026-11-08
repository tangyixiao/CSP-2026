#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen(".out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr); 
	cin.tie(0);
	cout.tie(0);
	int n=5;
	
	vector<char> a(n);
	vector<char> c(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	if(a[1]==c[1]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a[3]==c[3]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a[4]+3>=c[4]){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a[4]+1==c[4]||a[4]-1==c[4]){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}

