#include<bits/stdc++.h>
using namespace std;
string arr;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0;
	cin>>n;
	arr+=' ';
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			arr+=c;
		}
		l+=a;
	}
	int j=l;
	int sum=0;
	for(int i=1;i<=l/2;i++){
		if(arr[i]!=arr[j]){
			sum++;
		}
		j--;
	}
	cout<<sum;
	return 0;
} 
