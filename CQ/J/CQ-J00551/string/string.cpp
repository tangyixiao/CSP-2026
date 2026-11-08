#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long m;
		char c;
		cin>>m>>c;
		for(int j=0;j<m;j++){
			a=a+c;
		}
	}
	for(int i=a.size()-1;i>=0;i--){
		b=b+a[i];
	}
	int ans=a.size();
	for(int i=0;i<a.size();i++){
		if(a[i]==b[i]){
			ans--;
		}
	}
	cout<<ans/2;
	return 0;
}
