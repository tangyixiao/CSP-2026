#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string x;
	int last=0,hl=0;
	for(int i=0;i<n;i++){
		int num;
		char zi;
		cin>>num>>zi; 
		for(int j=1;j<=num;j++){
			x[last+j]=zi;
			last++;
			hl++;
		}
	}
	int sum=0;
	for(int i=1;i<=hl/2;i++){
		if(x[i]!=x[hl-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
