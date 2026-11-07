#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n=0;
ll ml=0;
char c[200005]={};
ll a[200005]={};
vector<char> c1;
vector<ll> a1;
vector<char> c2;
vector<ll> a2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ml=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		ml+=a[i];
	}
	ll cnt=0;
	ll zml=ml/2;
	int i=0;
	while(cnt<=zml && i<n){
		a1.push_back(a[i]);
		c1.push_back(c[i]);
		cnt+=a[i];
		i+=1;
	}
	if(cnt>zml){
		ll t=cnt-zml;
		a1[a1.size()-1]-=t;
		if(ml%2) t-=1;
		if(t>0){
			a2.push_back(t);
			c2.push_back(c1[c1.size()-1]);
		}
		if(a1[a1.size()-1]==0){
			a1.pop_back();
			c1.pop_back();
		}
	}
	if(a2.empty()) cnt=0;
	else cnt=a2[0];
	while(cnt<zml && i<n){
		a2.push_back(a[i]);
		c2.push_back(c[i]);
		cnt+=a[i];
		i+=1;
	}
	int tl=a2.size()/2;
	for(int i=0;i<tl;i++){
		swap(a2[i],a2[a2.size()-1-i]);
		swap(c2[i],c2[a2.size()-1-i]);
	}
	for(int i=1;i<a1.size();i++){
		a1[i]=a1[i-1]+a1[i];
	}
	for(int i=1;i<a2.size();i++){
		a2[i]=a2[i-1]+a2[i];
	}
	ll ans=0;
	i=0;
	int j=0;
	ll lb=0,rb=0;
	while(i<a1.size() && j<a2.size()){
		rb=min(a1[i],a2[j]);
		if(c1[i]!=c2[j]){
			ans+=rb-lb;
		}
		if(a1[i]<a2[j]){
			i+=1;
		}
		else if(a1[i]>a2[j]){
			j+=1;
		}
		else{
			i+=1;
			j+=1;
		}
		lb=rb;
	}
	cout<<ans;
	return 0;
}