#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500100];
int b[500100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<int>x[500100];//记录
		vector<int>c;//桌面
		for(int j=i;j<=n;j++){
			if(x[a[j]].empty()){
			c.push_back(a[j]);
				x[a[j]].push_back((c.size()-1));
			}else if(x[a[j]][0]==-1){
				c.push_back(a[j]);
				x[a[j]][0]=(c.size()-1);
			}else{
				for(int s=x[a[j]][0]+1;s<=(int)c.size()-1;s++){
					x[c[s]][0]=-1;
				}
				c.erase((c.begin()+x[a[j]][0]),c.end());
				//cout<< a[j]<<" "<<x[a[j]][0]<<" ";
				c.push_back(a[j]);
				x[a[j]][0]=c.size()-1;
			}
		}
		for(int k=0;k<(int)c.size();k++){
			b[c[k]]++;
			//cout<<c[k]<<" ";
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		 cout<<b[i]<<" ";
	}
	return 0;
}