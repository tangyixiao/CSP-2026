#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct yu{
	ll val;
	ll p;
}num[1000010];

bool cmp(yu a,yu b){
	if(a.p>b.p){
		return true;
	}
}
ll howm(ll k){
	ll cnt=0;
	while(k!=0){
		if(k%2!=0){
			cnt++;
		} 
		k/=2;
	}
	return cnt;
}
ll n;
void iiii(){
	bool k=1;
	for(int i=0;i<=n;i++){
		for(int j=i;j<=n-1;j++){
			if(num[j].p>num[j+1].p){
				swap(num[j],num[j+1]);
			}
		}
	}
	return;
}
int main(){
	freopen("and4.in","r",stdin);
	freopen("and.out","w",stdout);
	ll m,maxv=0,k=2;
	cin>>n>>m;
	//cout<<log(n);
	//Trick||Treat!
	for(int i=1;i<=n;i++){
		cin>>num[i].val;
		num[i].p=howm(num[i].val);
	}
	
	iiii();
	iiii();
	iiii();
	for(int i=n-1;i>=n-m+1;i--){
		num[i].val=num[i+1].val&num[i].val;
	}cout<<num[n-m+1].val;
}
