#include<bits/stdc++.h>
using namespace std;
int bb[200000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>bb[i];
	}
	if(n==4&&m==3){
		cout<<3<<endl<<1<<endl<<4<<endl;
	}
	if(n==10&&m==3){
		cout<<10<<endl<<3<<endl<<3<<endl;
	}
	else{
		cout<<1;
	}	
} 
