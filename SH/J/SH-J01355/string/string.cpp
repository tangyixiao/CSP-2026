#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
string s;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	bool same=1;
	for(int i=0;i<n-1;i++){
		if(c[i]!=c[i+1]){
			same=0;
		}
	}
	if(same){
		cout<<0;
		return 0;
	}
	cout<<sum/2;
	return 0;
}
