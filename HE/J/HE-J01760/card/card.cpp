#include<iostream>
#include<stack>
using namespace std;
bool b[209];
int ans[209];
int a[509];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	stack <int>s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(b[a[j]]==1){
				while(b[a[j]]==1){
					b[s.top()]=0;
					s.pop();
				}
			}
		s.push(a[j]);
		b[a[j]]=1;
		}
		for(int j=0;j<m;j++){
			if(b[j]==1){
				ans[j]++;
				b[j]=0;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
