#include<iostream>
using namespace std;
const int maxn=3e5+5;
int a[maxn],car[maxn];
bool flag[maxn] ;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		flag[i]=true;
	} 
	int tnt=0,ans=0;
	while(m--){
		tnt++;
		for(int i=0+tnt;i<=n;i++){
			car[i]=a[i];
			for(int j=0+tnt;j<i;j++){
				if(car[j]==car[i]){
					for(int k=j;k<i;k++){
						flag[k]=false;
					}
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(car[i]==tnt&&flag[i]==true) ans++;
		}
		cout<<ans<<" ";
	}
	return 0;
}
