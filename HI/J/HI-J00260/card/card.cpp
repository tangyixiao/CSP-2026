#include<bits/stdc++.h>
using namespace std;
int s[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,c=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>s[i];
}
	for(int i=1;i<=b;i++){
		c=0;
		for(int j=1;j<=i;j++){
			c++;	
		}
		cout<<c<<" ";
	}

		return 0;
}
