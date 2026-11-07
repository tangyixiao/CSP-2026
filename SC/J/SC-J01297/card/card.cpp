#include<bits/stdc++.h>
using namespace std;
int a[50005];
bool d[50005];//标记数组
vector<int> b;//原始数据
stack<int> c;//当前数据栈
int main(){
	int n,m;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	for (int i=0;i<50005;i++){
		d[i]=false;
	}
	cin>>n>>m;
	for (int i=0;i<n;i++){
		int y;
		cin>>y;
		b.push_back(y);
	}
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (d[b[j]]==false){
				d[b[j]]=true;
				c.push(b[j]);
			}
			else{
				while(d[b[j]]){
					int w=c.top();
					c.pop();
					d[w]=false;
				}
				d[b[j]]=true;
				c.push(b[j]);
			}
		}
		while(!c.empty()){
			int q=c.top();
			c.pop();
			d[q]=false;
			a[q]+=1;
		}
		
	}
	for (int i=1;i<m+1;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}