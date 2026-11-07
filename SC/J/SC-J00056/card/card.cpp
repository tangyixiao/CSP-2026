#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int n,m,a[500005],vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i =1;i<=n;i++){
		cin >> a[i];
	}
	for(int i =1;i<=n;i++){
		bool b[300005];
		memset(b,0,m-1);
		for(int j =i;j<=n;j++){
			if(b[a[j]]==false){
				s.push(a[j]);
				b[a[j]] = true;
			}
			else{
				while(s.top()!=a[j]){
					s.pop();
				}
			}
		}
		while(!s.empty()){
			vis[s.top()]++;
			s.pop();
		}
	}
	for(int i =1;i<=m;i++){
		cout << vis[i] << " ";
	}
	return 0;
}