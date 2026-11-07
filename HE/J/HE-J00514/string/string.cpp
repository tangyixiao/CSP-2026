#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
char st[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long we=0;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		char b;
		cin>>b;
		for(int j=1;j<=a;j++){
			st[we]=b;
			we++;
		}
	}
	long long gai=0;
	 for(int i=1;i<=we/2;i++){
	 	if(st[i-1]==st[we-i]){
	 		continue;
		 }else{
		 	gai++;
		 }
	 }
	 cout<<gai;
	return 0;
}


