#include <bits/stdc++.h>
#define maxn 500005
#define maxm 300005
using namespace std;
int n,m;
int a[maxn],t[maxm],t1[maxm];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<int> desk;
	for(int i=1;i<=n;i++){
		memset(t,-1,sizeof(t));
		int top=0;
		int num=1;
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=-1){
				for(int k=t[a[j]]+1;k<=top;k++){
					t[k]=-1;
				}
				top=t[a[j]];
				num=top;
			}else{
				t[a[j]]=num;
				top++;
//				cout<<t[a[j]]<<" ";
			}
			num++;
//			cout<<top<<" ";
		}
//		cerr<<i<<"\n";
//		cout<<"topÎª"<<top<<"\n";
		for(int j=1;j<=m;j++){
			if(t[j]!=-1&&t[j]<=top){
//				cout<<"Î»ÖÃ"<<t[j]<<"Îª"<<j<<" ";
//				cout<<"check\n";
				t1[j]++; 
			} 
		}
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++){
		cout<<t1[i]<<' ';
	}
	return 0;
}
/*
4 3
1 2 1 3
*/

/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
