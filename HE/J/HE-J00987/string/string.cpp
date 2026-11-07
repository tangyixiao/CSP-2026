#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0,num=0;
	cin>>n;
	string z;
	for(int i=1;i<=n;i++){
		int a;char s;
		cin>>a>>s;num+=a;
		for(int i=1;i<=a;i++){
			z+=s;
		}
	}
	for(int i=1;i<=num;i++){
		if(z[i-1]!=z[num-i+1]){
			sum++;
		}
	}
	if(sum%2==1){
		sum++;
	} 
	cout<<sum/2;
	return 0;
}
