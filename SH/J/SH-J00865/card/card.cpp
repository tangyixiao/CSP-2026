#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int c[300005];
bool b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> s;
		for(int j=i;j<=n;j++){
			s.push(a[j]);
			if(b[a[j]]){
				s.pop();
				while(true){
					int x=s.top();
					if(x==a[j])break;
					s.pop();
					b[x]=false;
				}
			}else{
				b[a[j]]=true;
			}
		}
	//	cout<<i<<endl;
		while(!s.empty()){
			int x=s.top();
			c[x]++;
		//	cout<<x<<" ";
			s.pop();
			b[x]=false;
		}
	//	cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
