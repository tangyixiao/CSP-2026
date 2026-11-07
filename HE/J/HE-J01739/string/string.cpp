#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==a[j][i]){
				cout<<"0";
			}
		}
		s+=1;
	}
	cout<<s;
	return 0;
}
