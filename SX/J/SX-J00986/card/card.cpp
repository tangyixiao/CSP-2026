#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],lft[300005];
bool mem[300005],t[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
//		cout<<"new!"<<endl;
		stack<int>s;
		memset(mem,0,sizeof(mem));
		memset(t,0,sizeof(t));
		for(int j=i;j<=n;j++){
			s.push(a[j]);
//			cout<<"push:"<<a[j]<<endl;
			if(mem[a[j]]==0){
				mem[a[j]]=1;
			}else{
				do{
//					cout<<"now pop:"<<s.top()<<endl;
					mem[s.top()]=0;
					s.pop();
				}while(s.top()!=a[j]);
				mem[s.top()]=1;
//				cout<<"now pop:"<<s.top()<<endl;
//				s.pop();
//				cout<<"now top:"<<s.top()<<endl;
			}
		}
		while(!s.empty()){
			if(!t[s.top()])lft[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<lft[i]<<' ';
	}
    return 0;
}
