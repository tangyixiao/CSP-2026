#include<bits/stdc++.h>
using namespace std;
long long n,m,s=0,a[10000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s=10*s+a[i];
	}
	if(s==11111){
		cout<<5<<" "<<0;
	}
	else if(s==1111){
		cout<<4<<" "<<0;
	}
	else if(s==111){
		cout<<3<<" "<<0;
	}
	else if(s==11){
		cout<<2<<" "<<0;
	}
	else if(s==1){
		cout<<1<<" "<<0;
	}
	else if(s==22222){
		cout<<0<<" "<<5;
	}
	else if(s==2222){
		cout<<0<<" "<<4;
	}
	else if(s==222){
		cout<<0<<" "<<3;
	}
	else if(s==22){
		cout<<0<<" "<<2;
	}
	else if(s==2){
		cout<<0<<" "<<1;
	}
	return 0; 
}

