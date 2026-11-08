#include<bits/stdc++.h>
using namespace std;
int a,b,c=0;
int k[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>k[i];
		if(k[i]>k[i-1])c++;
	}
	if(c==a){
		for(int i=1;i<=b;i++)cout<<a<<" ";
	}
	return 0;
} 
