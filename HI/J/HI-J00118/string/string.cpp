#include<bits/stdc++.h>
using namespace std;
int n,a[200005],ans;
char c[200005];
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++)b+=c[i]; 
	}
	int l=0,r=b.size()-1;
	while(l<r){
		if(b[l]!=b[r]){
			ans++;
		}
		l++;
		r--;
	}cout<<ans;
	return 0;
}
