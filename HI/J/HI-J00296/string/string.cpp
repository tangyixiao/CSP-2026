#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	char s[200005];
	int k=1;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s[k]=c;
			k++;
		}
	}
	int sum=0;
	for(int i=1;i<=k/2;i++){
		if(s[i]!=s[k-i+1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
