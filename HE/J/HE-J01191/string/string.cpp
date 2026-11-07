#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[1000];
	string b[1000];
	string x;
	for (int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for (int j=0;j<a[i];j++){
			x+=b[i]; 
		}
	}
	
	int len=x.length();
	int total=0;
	for (int i=0;i<len/2;i++){
		if (x[i]!=x[len-1]){
			total++;
			len--;
		}
	}
	cout<<total<<endl;
}
