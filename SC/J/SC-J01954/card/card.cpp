#include <bits/stdc++.h>
using namespace std;
int n,m,cnt,t[300005];
string zh;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=0;
	}
	if(flag==1){
		for(int i=1;i<=n;i++){
			if(a[i]==a[i+1]){
				continue;
			}
			cout<<i<<' ';	
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		zh="";
		//cout<<i<<endl;
		for(int j=i;j<=n;j++){
			if(zh.find(char(a[j]+48))==string::npos){
			}
			else{
				int it=zh.find(char(a[j]+48));
				zh.erase(zh.begin()+it,zh.end());
				
			}
			zh+=char(a[j]+48);
			//cout<<zh<<endl;
		}
		for(int j=1;j<=m;j++){
			if(zh.find(char(j+48))!=string::npos){
				t[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
	return 0;
}