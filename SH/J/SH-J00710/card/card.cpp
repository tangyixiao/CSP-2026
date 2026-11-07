#include <bits/stdc++.H>
using namespace std;
int n,m,c[500005],ans[500005];
bool game(int x,int ii){
	bool flag; 
	stack<int> t;
	int tmp[500005];
	for(int i=x;i<=n;i++){
		for(int j=x;j<=i;j++){
			if(t.top()==c[j]){
				flag=1;
				break;
			}
			tmp[j]=t.top();
			t.pop();
		}
		for(int j=i;j>=x;j--){
			t.push(tmp[j]);
		}
		if(flag==0){
			t.push(c[i]);
		}else{
			for(int j=i;t.top()!=c[j];j--){
				t.pop();
			}
			t.push(c[i]);
		}
	}
	while(!t.empty()){
		if(t.top()==ii){
			return 1;
		}
		t.pop();
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ans[j]=game(i,j);
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
	}
	return 0;
} 
