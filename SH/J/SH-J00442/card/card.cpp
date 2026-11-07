#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
vector <ll> a,b,c;//xianyongyou,zhuomian,dianshuchuxian
void A(){
	for(int i=0;i<b.size();i++){
		c[b[i]]++;
	}
}
void B(ll dy){
	bool dx=true;
	for(int i=0;i<b.size();i++){
		if(b[i]==dy){
			dy=false;
		}
		if(dy==false){
			b[i]=0;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		a.push_back(x);
		c.push_back(0);
		b.push_back(0);
	}
	for(int j=0;j<n;j++){
		for(int i=j;i<n;i++){
			B(a[i]);
			b[i]=a[i];
		}
		A();
		for(int i=0;i<n;i++){
			if(b[i]!=0){
				b[i]=0;
			}
		}
		
	}
	for(int i=1;i<c.size();i++){
		if(c[i]!=0)
			cout<<c[i]<<" ";
	}
	return 0;
}
