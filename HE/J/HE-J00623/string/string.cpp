#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
long long a[10001],top1,top2;
char b[10001];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout );
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	top2=n;
	while(top2>top1){
		if(b[top1]==b[top2]&&a[top1]==a[top2]){
			top1++;
			top2--;	
		}
	}
	return 0;
}
