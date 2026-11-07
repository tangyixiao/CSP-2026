#include<bits/stdc++.h>
using namespace std;
int sum=0;//sjy
int ishuiwen(string a){
	sum=0;
	int len=a.size()-1;
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-i]){
			sum++;
		}
	}
	return sum;
}	
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int geshu[200005];
	char zimu[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>geshu[i]>>zimu[i];
	}
	string zifuchuan;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=geshu[i];j++){
			zifuchuan+=zimu[i];
		}
		
	}
	if(ishuiwen(zifuchuan)==0)cout<<0;
	else{
		cout<<ishuiwen(zifuchuan);
	}
}
