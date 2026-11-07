#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
long long b[1000000];
string s;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n,c1;
	char c2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c1>>c2;
		for(int i=1 ; i<=c1;i++){
			s=s+c2;
		}
	}cout<<s;
	return 0;
} 
