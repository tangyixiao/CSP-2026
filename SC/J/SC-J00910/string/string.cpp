#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{
	ll a;
	string b;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	vector<node> v(n+1);
	ll sum=0;
	for(ll i=1;i<=n;i++){
		cin>>v[i].a>>v[i].b;
		sum+=v[i].a;
	}
//	vector<ll>
ll cnt=0; 
queue<node> qe;
queue<node> pe;
		sum/=2;
		for(ll i=1;i<=n;i++){
		if(cnt+v[i].a<sum){
			cnt+=v[i].a;
			qe.push({v[i].a,v[i].b});
//			cout<<"qe"<<v[i].a<<v[i].b<<endl;
		}else{
		qe.push({sum-cnt,v[i].b});
//		cout<<"qe"<<sum-cnt<<v[i].b<<endl;
		v[i].a-=sum-cnt;
		break;
		}	
		}
		cnt=0;
		for(ll i=n;i>=1;i--){
			if(cnt+v[i].a<sum){
				cnt+=v[i].a;
				pe.push({v[i].a,v[i].b});
//				cout<<"pe"<<v[i].a<<v[i].b<<endl;
			}else{
				pe.push({sum-cnt,v[i].b});
//				cout<<"pe"<<sum-cnt<<v[i].b<<endl;
//				v[i].a-=sum-cnt;
				break;
			}
		}
		ll ans=0;
		while(qe.size()){
			ll x=qe.front().a;
			ll y=pe.front().a;
			if(x==y){
				if(qe.front().b==pe.front().b){
					
				}else{
					ans+=x;
//					cout<<"debug 1 "<<x<<endl;
				}
				qe.pop();
				pe.pop();
			}else if(x>y){
				qe.front().a-=pe.front().a;
				if(qe.front().b==pe.front().b){
					
				}else{
					ans+=y;
//					cout<<"debug 2 "<<y<<endl;
				}
				pe.pop();
			}else{
				pe.front().a-=qe.front().a;
				if(qe.front().b==pe.front().b){
					
				}else{
					ans+=x;
//					cout<<"debug 3 "<<x<<endl;
				}
				qe.pop();
			}
		}
		cout<<ans;
	return 0;
}
