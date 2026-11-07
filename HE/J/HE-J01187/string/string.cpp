#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int num;char c;
		cin>>num>>c;
		for(int j=0;j<num;j++) a+=c;
		k+=num;
	} 
	//cout<<a;
	int i=0,j=k-1;
	while(i<j){
		if(a[i]!=a[j]) ans++;
		if(i==j||(abs(i-j)==1)){
			break;
		}
		i++,j--;
	}
	cout<<ans;
	return 0;
}

/*
RP++; 
*/



