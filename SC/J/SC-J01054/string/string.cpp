#include<bits/stdc++.h>
using namespace std;
int n,a[1000001],sum;
string c[1000001],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			sum++;
			s[r]=s[l];
		}
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}