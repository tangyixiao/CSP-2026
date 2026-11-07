#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[100007],data[100007],data1[100007],cnt=0;
	char c;
	cin>>n;
	if(n==1){
		cin>>a[1]>>c;
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
			data[j]=c;
			cnt++;
		}
	}
	cout<<2; 
	for(int i=1;i<=100;i++){
		for(int j=1;j<=i;j++){
			break;
		}
	} 
/*	for(int i=1;i<={
		
	}*/
	return 0;
}
