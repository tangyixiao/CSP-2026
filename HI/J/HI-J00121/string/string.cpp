#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int sum=0,m,n;
	char s;
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>m;
		cin>>s;
		for(int j=1;j<=m;j++){
			a+=s;
		} 
	}
	for(int i=0;i<=(a.size()-1)/2;i++){
		if(a[i]!=a[a.size()-1-i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
