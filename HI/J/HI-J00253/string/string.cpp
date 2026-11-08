#include<bits/stdc++.h>
using namespace std;
long long a[100001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s;
		for(int j=1;j<=i;j++){
				s+=s;
		}
		
	}
	cout<<s;
	return 0;
}
