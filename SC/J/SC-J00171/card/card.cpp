#include<iostream>
#include<queue>
using namespace std;

int n,m;
int a[500005],v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		queue<int>q,e;
		q.push(a[i]);
		for(int j=i+1;j<=n;j++){
			bool f=0;
			while(q.size()){ 
				int x=q.front();
				q.pop();
				e.push(x);
				if(x==a[j]){
					while(q.size()){
						q.pop();
					}
					while(e.size()){
						q.push(e.front());
						e.pop();
					}
					f=1;
					break;
				}
			}
			if(f==0){
				while(e.size()){
						q.push(e.front());
						e.pop();
				}
				q.push(a[j]);
			}
		}
		while(q.size()){
			v[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<v[i]<<" ";
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}