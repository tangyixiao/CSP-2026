#include<bits/stdc++.h>
using namespace std;
struct node{
	long long id;
	long long vis;
};
long long n,m;
long long a[505000];//Ã¿ÕÅÅÆÊÇÉ¶
long long pos[305000];
node v[505000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	memset(pos,0,sizeof(pos));
	for(int i=1;i<=n;i++){
		memset(v,0,sizeof(v));
		for(int j=i;j<=n;j++){
			if(v[a[j]].id==0){
				v[a[j]].id=1;
				v[a[j]].vis=j;
				pos[a[j]]+=1;
				continue;
			}
			else{
				for(int l=j-1;l>=v[a[j]].vis;l--){
					if(v[a[l]].id==1){
						pos[a[l]]-=1;
					}
					v[a[l]].id=0;
				}
				v[a[j]].vis=j;
				v[a[j]].id=1;
				pos[a[j]]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<pos[i]<<" ";
	}
	return 0;
}
