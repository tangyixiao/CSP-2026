#include<bits/stdc++.h>
using namespace std;
int a[500002],num[300002],flag[300002];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		queue<int> q;
		for(int j=i;j<=n;j++){
			q.push(a[j]);
			if(flag[a[j]]!=1){
				flag[a[j]]=1;
			}else{
				int f=1;
				for(int k=1;k<=q.size();k++){
					if(q.front()==a[j]&&f==0)break;
					if(q.front()==a[j]||f==0){
						f=0;
						flag[q.front()]=0;
						q.pop();
					}
				}
				flag[a[j]]=1;
			}	
		}
		while(!q.empty()){
			num[q.front()]++;
			//cout<<q.front()<<" ";
			q.pop();
		}
		//cout<<endl;
		for(int k=1;k<=m;k++)flag[k]=0;
	}
	for(int i=1;i<=m;i++)cout<<num[i]<<" ";
	
	return 0;
}
 