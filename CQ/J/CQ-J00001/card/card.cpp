#include<bits/stdc++.h>
using namespace std;
long long n,m,xa[300005],a[300005];
queue<long long> me;
map<long long,long long> mtable;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>xa[i];
		me.push(xa[i]);
	}
//	for(int i=1;i<=n;i++){
//		cout<<me.front()<<" ";
//		me.pop();
//	}
// 初始读入测试成功 


	for(int i=1;i<=n;i++){
		if(i>1){
			me.pop();
		}
		
		
		queue<long long> table;
		queue<long long> xxx;
		for(int j=i;j<=n;j++){
			xxx.push(xa[j]);
		}
//		for(int j=i;j<=n;j++){
//			cout<<xxx.front()<<" ";
//			xxx.pop();
//		}
		//没问题 
		
		
		for(int j=1;j<=me.size();j++){
			if(mtable[xxx.front()]==0){
				table.push(xxx.front());
				mtable[xxx.front()]=1;
				xxx.pop();
			}
			else{
				for(int k=1;k<=table.size();k++){
					mtable[table.front()]=0;
					table.pop();
				}
				table.push(xxx.front());
				xxx.pop();
			}
			
			for(int j=1;j<=table.size();j++){
				cout<<table.front()<<" ";
				table.pop();
			}
			
		}
		
		
		
		for(int j=1;j<=table.size();j++){
			//cout<<table.front()<<"!";
			a[i]++;
			table.pop();
		}
		
		
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
