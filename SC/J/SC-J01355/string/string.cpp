#include<bits/stdc++.h>
using namespace std;
int main() {

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	int m;
	cin>>m;
	char a[m];
	int b[m]={0};
	for(int i=0;i<m;i++){
		cin>>b[i]>>a[i];
	}
	long long  h=0;
	for(int i=0;i<m;i++){
		for(int j=m-1;j>i;j--){
			if(b[j]==0){
				continue;
			}
			if(a[i]!=a[j]){
				if(b[i]>b[j]){
					b[i]-=b[j];
					
					h+=b[j];
					b[j]=0;
				}
				else{
					h+=b[i];
					b[j]-=b[i];
					b[i]=0;
					break;
				}
			}
			else{
				if(b[i]>b[j]){
				b[i]-=b[j];
					b[j]=0;
				}
				else{
					b[j]-=b[i];
					b[i]=0;
					break;
				}
			}
		}
	}
	cout<<h;
	return 0;
}
