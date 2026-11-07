#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n,m,a[N],ans[N],l;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		string now;
		for(int j=i;j<=n;j++){
			for(int i2=0;i2<now.size();i2++){
				if(now[i2]==char(a[j]+'0')){
					now.erase(i2+1,now.size());
					break;
				}
				if(i2==now.size()-1){
					now+=char(a[j]+'0');
				}
			}
		}
		for(int j=0;j<now.size();j++){
			ans[int(now[j]-'0')]++;
		}
		cout<<now<<endl;
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}