#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],ans[N];
bool b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> s;
		memset(b,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(!b[a[j]]){
				//cout<<"p "<<a[j]<<endl;
				s.push(a[j]);
				b[a[j]]=1;
			}else{
				int t=s.top();
				while(t!=a[j]){
					//cout<<t<<" ";
					b[t]=0;
					s.pop();
					t=s.top();
				}
				//cout<<t<<endl;
				s.pop();
				s.push(a[j]);
			}
		}
		while(!s.empty()){
			int t=s.top();
			s.pop();
			ans[t]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	} 
	cout<<endl;
	return 0;
}
