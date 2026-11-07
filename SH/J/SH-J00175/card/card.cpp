#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],s[300005];
int main(){
	freopen("card.in","r"stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];		
	}
	bool flag=0;
	for(int i=1;i<=n;i++){
		int sum[300005]={0};
		queue<int> q;
		for(int j=i;j<=n;j++){
			if(sum[a[j]]>1){
				for(int k=1;k<=q.size();k++){
					if(q.front()!=a[j]){
						q.pop();
					}
					else{
						break;
					}
				}
			}
			else{
				q.push(a[i]);
			}
		}
		for(int j=1;j<=q.size();j++){
			s[a[j]]++;
		}
	}
	bool b[300005];
	for(int i=1;i<=n;i++){
		if(b[a[i]]==0){
			b[a[i]]=1;
			cout<<s[a[i]]<<" ";
		}
	}
	return 0;
} 
