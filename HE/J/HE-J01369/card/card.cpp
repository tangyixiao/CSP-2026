#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int n,m,a[500005],sxd[300005];//n张牌，m种点数 
bool ygd[500005];//记录用过的牌 
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(!ygd[a[j]]){
				s.push(a[j]);
				ygd[a[j]]=1;
			}
			else{
				while(!(s.top()==a[j])){
					ygd[s.top()]=0;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			sxd[s.top()]++;
			ygd[s.top()]=0;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<sxd[i]<<' ';
	
	return 0;
}


