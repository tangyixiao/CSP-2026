#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],cont[300001],ypai[300001],pos;
vector<int> pai;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(ypai,0,sizeof(ypai));
		pai.clear();
		for(int j=i;j<=n;j++){
			if(ypai[a[j]]==0){
				ypai[a[j]]=++pos;
				pai.push_back(a[j]);
			}
			else{
				int num=pos-ypai[a[j]]+1;
				for(int k=1;k<=num;k++){
					pai.pop_back();
					pos--;
				}
				ypai[a[j]]=++pos;
				pai.push_back(a[j]);
			}
		}
		for(int j=0;j<pai.size();j++){
			cont[pai[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cont[i]<<' ';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
