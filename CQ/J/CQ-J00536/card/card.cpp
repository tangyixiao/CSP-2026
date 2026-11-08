#include<bits/stdc++.h>
using namespace std;
int n,a[500005],m,ans;
queue<int> zm,t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=m;x++){
		ans=0;
		for(int i=x;i<=n;i++){
			int zs=zm.size();
			for(int j=1;j<=zs;j++){
				if(a[i]==zm.front()){
					for(int k=j;k<=zs;k++){
						zm.pop();
					}
				}
				else{
					t.push(zm.front());
					zm.pop();
				}
			}
			int ts=t.size();
			for(int j=1;j<=ts;j++){
				zm.push(t.front());
				t.pop();
			}
			zm.push(a[i]);
		}
		int zss=zm.size();
		for(int i=1;i<=zss;i++){
			if(zm.front()==x){
				ans++;
			}
			zm.pop();
		}
		cout<<ans<<" ";
	}
	return 0;
}
