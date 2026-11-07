#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e6+10;
ll a[N],o[N],nm[N];
ll n,m;
stack<ll>sk;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		
		memset(o,0,sizeof(o));
		for(ll j=i;j<=n;j++){
			sk.push(a[j]);
			if(o[a[j]]){
				sk.pop();
				while(true){
					if(sk.top()==a[j])break;
					else {
						o[sk.top()]=0;
						sk.pop();
					}
				}
			}
			o[a[j]]=1;
		}
		while(!sk.empty()){
			nm[sk.top()]++;
			sk.pop();
		}
	}
	for(ll i=1;i<=m;i++)cout<<nm[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
