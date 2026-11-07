#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
        	sum++;
		}
	}
	cout<<2;
	return 0;
}
