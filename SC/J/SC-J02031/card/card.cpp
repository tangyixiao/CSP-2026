#include<iostream>
#include<queue>
using namespace std;

int m,n,a[500001]={},b[500001]={};
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	queue<int> q;
	queue<int> qq;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			while(!q.empty()){
				if(q.front()==a[j]){
					while(!q.empty()){
						q.pop(); 
					}
					break;
				}else{
					qq.push(q.front());
					q.pop();
				}
			}
			while(!qq.empty()){
				q.push(qq.front());
				//cout<<qq.front()<<' ';
				qq.pop();
			}
			q.push(a[j]);
			//cout<<a[j];
			//cout<<endl;
		}
		while(!q.empty()){
			b[q.front()]++;
			//cout<<q.front()<<' ';
			q.pop();
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
} 