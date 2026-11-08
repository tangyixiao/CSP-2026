#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5005];
bool c[3005]={false},d[3005];
deque<int> x,y;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			x.push_back(a[j]);
		}
		for(int j=i;j<=n;j++){
			y.push_back(x.front());
		    if(c[y.back()]){
			   int sum=y.back();
			   y.pop_back();
			   while(y.back()!=sum&&!y.empty()){
				    y.pop_back();
			   }
			y.push_back(x.front());
		    }else{
		    	c[x.front()]=true;
			}
		    x.pop_front();
		}
		while(!y.empty()){
			if(!d[y.front()])b[y.front()]++;
			d[y.front()]=true;
			y.pop_front();
		}
		for(int j=1;j<=m;j++){
			c[j]=false;
			d[j]=false;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
