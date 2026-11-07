#include<bits/stdc++.h>
#define int long long
using namespace std;

int b[100010],vist[1000010];
signed main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++){
		stack<int> a;
		for(int y=i;y<=n;y++){
				if(vist[i]==0){
					a.push(b[y]);
					vist[y]=1;
			    }else{
					while(a.top()!=b[y]){
					   a.top();
						cout<<1;
					}
						a.top();
						vist[b[y]]=0;
				}
			cout<<1;
		}
		cout<<a.top();
	}
	
	return 0;
}
