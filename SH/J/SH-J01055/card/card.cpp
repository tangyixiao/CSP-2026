#include<bits/stdc++.h>
using namespace std;
int a[200000]={};
bool b[300000]={};
int c[200000]={};
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	stack<int> s;
	cin>>n>>m;
	int T=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<a[i-1]) T=1;
	}
	if(T==0){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(j==n || a[j+1]>a[j]){
					c[a[j]]++;
				}
			}
		}
		for(int i=1;i<=m;i++){
			printf("%d ",c[i]);
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				b[a[j]]=1;
				s.push(a[j]);
			}
			else{
				while(s.empty()==0){
					if(s.top()==a[j]){
						s.pop();
						break;
					}
					else{
						b[s.top()]=0;
						s.pop();
					}
				}
				//b[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(s.empty()==0){
			//cout<<s.top()<<' ';
			b[s.top()]=0;
			c[s.top()]++;
			s.pop();
		}
		//cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
