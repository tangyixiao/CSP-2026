#include<bits/stdc++.h>
using namespace std;
int a[500010],js[300010];
bool vis[300010];
vector<int>vec;
void sum(){
	memset(vis,false,sizeof(vis));
	for(int i=0;i<vec.size();i++){
		if(vis[vec[i]]==false){
			js[vec[i]]+=1;
			vis[vec[i]]=true;
		}
	}
}
int find(int num){
	for(int i=0;i<vec.size();i++){
		if(vec[i]==num)return i;
	}
	return -1;
}
 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	int cnt=0;
	for(int i=0;i<m;i++){
		cout<<i+1<<" ";
		cnt+=1;
	}
	cout<<endl;
	return 0;
}
