#include<bits/stdc++.h>
using namespace std; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	char al[200005];
	int k=0;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			k++;
			al[k]=c;
		}
	}
	int cnt=0;
	int y;
	if(k%2==0) y=k/2;
	else y=k/2+1;
	for(int i=1;i<=y;i++){
		if(al[i]!=al[k]){
			cnt++;
		}
		k--;
	}
	cout<<cnt;
}