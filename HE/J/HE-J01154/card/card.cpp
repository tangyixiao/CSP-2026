#include<iostream>
#include<cstdio>
using namespace std;
int num[500005];
struct Flag{
	int shi;
	int id;
};
Flag f[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int a=0;a<n;a++){
		for(int i=1;i<=m;i++){
			f[i].shi=0;
			f[i].id=-1;
		}
		for(int i=a;i<n;i++){
			if(f[num[i]].shi==1){
				for(int j=f[num[i]].id;j<i;j++){
					f[num[j]].shi=0;
					f[num[j]].id=-1;
				}
				f[num[i]].id=i;
				f[num[i]].shi=1;
			}else{
				f[num[i]].shi=1;
				f[num[i]].id=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(f[i].shi==1){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
