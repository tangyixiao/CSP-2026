#include<bits/stdc++.h>
#define ps(x) push_back(x)
using namespace std;
const int N=3e5+10;
//main
int n,m;
int a[N];
vector<int>tbl;
int data[N];
int ans[N];
void clean(){for(int i=1;i<=n;i++)data[i]=0;}
//

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int tot=1;
		tbl.ps(-1);
		for(int j=i;j<=n;j++){
			if(data[a[j]]==0){tbl.ps(a[j]);data[a[j]]=tot;tot++;}
			else{
				for(int k=data[a[j]];k<=tbl.size();k++){
					tbl.pop_back();
					data[tbl[k]]=0;
					tot--;
				}
				data[a[j]]=tot;
			}
		}
//		cout<<i<<":\n";
//		for(int k=1;k<=tbl.size();k++)cout<<tbl[k]<<" ";
//		cout<<"\ndata:";
//		for(int i=1;i<=m;i++)cout<<data[i]<<" "; 
//		cout<<"\n\n";
		for(int j=1;j<=m;j++)if(data[j]!=0)ans[j]++;
		tbl.clear();
		clean();
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}