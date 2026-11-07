#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	int m=0;
	char c=' ';
	char ac[200000];
	int cnt=0;
	int ak=0;
	for(int i=0;i<n;i++){
		cin>>m;
		cin>>c;
		for(int j=cnt;j<m+cnt;j++){
			ac[j]=c;
		}
		cnt+=m;
		m=0;
	}
	for(int i=0;i<cnt/2+1;i++){
		if(ac[i]!=ac[cnt-i-1]){
			ak++;
		}
	}
	cout<<ak;
} 
