#include<bits/stdc++.h>
using namespace std;
int sj[500001];
bool pd[300001];
int gs[300001];
int da[300001];
stack<int> z;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>sj[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(pd[sj[j]]==false){
				gs[sj[j]]++;
				pd[sj[j]]=true;
				z.push(sj[j]);
			}else{
				while(z.top()==sj[j]){
					gs[z.top()]--;
					if(gs[z.top()]==0) pd[z.top()]=false;
					z.pop();
				}
				z.pop();
			}
		}
		for(int j=1;j<=m;j++){
			if(pd[i]) da[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<da[i]<<" ";
	}
    return 0;
}