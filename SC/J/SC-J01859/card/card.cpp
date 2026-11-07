#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005];
vector<ll>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		queue<ll>q;
		for(int j=i;j<=n;j++){
			q.push(a[j]);
			bool f=0;
			if(q.size()!=1)
				for(int k=1;k<=q.size();k++){
					if(q.front()==a[j]){
						if(f){
							q.push(q.front());
							q.pop();
							continue;
						}
						q.pop();
						k++;
						while(q.front()!=a[j]){
							q.pop();
							k++;
						}
						f=1;
						k--;
					}
					else q.push(q.front());
					q.pop();
				}
			
		}
		for(int i=1;i<=q.front();i++){
			s[q.front()]++;
		}
	}
	for(auto it:s){
		cout<<it<<' ';
	}
	cout<<endl;
	return 0;
}