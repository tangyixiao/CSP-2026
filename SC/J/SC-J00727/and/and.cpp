#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int arr[10000000][1000000];

int main(){
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		int k;
		cin>>k;
		a[i]=k;
		int q=k,num=0;
		for (int j=1;j<=30;j++){
			arr[i][j]=q%2;
			q/=2;
			if(q==0){
				break;
			}
			num+=1;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i][1]<<endl;
	}
	return 0;
}
