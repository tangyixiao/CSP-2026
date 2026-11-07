#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],ans[500005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			s.push(a[j]);
			b[a[j]]++;
			if(b[a[j]]==2){
				while(1){
					b[s.top()]--;
					s.pop();
					if(s.top()==a[j]) break;
				}
			}
		}while(s.size()!=0){
			ans[s.top()]++;
			b[s.top()]--;
			s.pop();
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}