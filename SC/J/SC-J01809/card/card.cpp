#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],t[300005],num[500005];
bool f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> q;
		memset(num,0,sizeof(num));
		for(int j=i;j<=n;j++){
			if(num[a[j]]){
				while(!q.empty()){
					if(q.top()==a[j]){
						num[q.top()]--;
						q.pop();
						break;
					}
					num[q.top()]--;
					q.pop();
				}
			}
			q.push(a[j]);
			num[a[j]]++;
		}
		memset(f,0,sizeof(0));
		while(!q.empty()){
			t[q.top()]++;
			//cout<<q.top()<<" ";
			q.pop();
		}
		//cout<<"\n";
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}//Trick||Treat! 10:42 48?
