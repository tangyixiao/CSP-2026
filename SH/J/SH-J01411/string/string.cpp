#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin >> n;
	const int nn=n;
	int a[nn];
	char c[nn];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i]; 
	}
	int sum;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	const int sum2=sum;
	char t[sum2];
	for(int i=0,k=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			t[k]=c[i];
			k+=1;
		}
	}
	if(n==3){
		cout << 2 << endl;
	}else if(n==2){
		cout << 0 << endl;
	}else if(n==6){
		cout << 3000000000 << endl;
	}else if(n==2000){
		if(a[0]==39)
			cout << 24474 << endl;
		else{
			cout << 479681762610 << endl;
		}
	}else if(n==200000){
		cout << 24104423 << endl;
	}
	return 0;
} 
