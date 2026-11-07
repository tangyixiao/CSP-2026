#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a="";
	int n,s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		char h;
		cin>>k;
		cin>>h;
		for(int j=0;j<k;j++){
			a+=h;
		}
		s+=k;
	}
	int ans=0;
	s--;
	for(int i=0;i<s/2+1;i++){
		if(a[i]!=a[s]){
			a[s]=a[i];
			ans++;
		}
		s--;
	}
	cout<<ans;
	return 0;
}
