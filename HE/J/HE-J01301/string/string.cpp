#include<bits/stdc++.h>
using namespace std;
int n,sum;
string b[100000005];
string a[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]+=a[i];
	}
	for(int j=0;j<n;j++){
		if(b[j]!=b[n-j]){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
}
