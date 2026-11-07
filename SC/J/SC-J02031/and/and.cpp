#include<iostream>
using namespace std;

long long a[200001]={},b[2][200001]={};
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);

int main(){
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j<=i){
				if(j==1){
					b[1][j]=max(b[0][j],a[i]);
				}else{
					b[1][j]=max(b[0][j],a[i]&b[0][j-1]);
				}
				//cout<<b[0][j]<<' '<<a[i]<<' '<<b[0][j-1]<<endl;
			}
		}
		for(int j=1;j<=n;j++){
			//cout<<b[1][j]<<' ';
			b[0][j]=b[1][j];
		}
		//cout<<endl;
	}
	cout<<b[1][n];
}