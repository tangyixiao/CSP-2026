#include<bits/stdc++.h>
using namespace std;
string b[100003];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,flag=1;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		cin>>a,b[i];
	}
	for(int i=1;i<n;i++){
		if(b[i]==b[i-1]){
			flag=0;
		}
	}
	cout<<flag;
}
