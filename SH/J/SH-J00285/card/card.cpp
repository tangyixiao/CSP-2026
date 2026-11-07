#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n;
int a[500005],dian[500005],zai[5000005];
bool jianlema[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			zai[j]=0;
		}
		cout<<i<<endl;
		for(int j=i;j<=n;j++){
			if(zai[a[j]]==0){
				dian[a[j]]++;
				zai[a[j]]=j;
			}
			else{
				for(int k=1;k<=m;k++){
					jianlema[k]=0;
				}
				for(int k=zai[a[j]]+1;k<j;k++){
					if(!jianlema[a[k]]&&zai[a[k]]!=0){
						dian[a[k]]--;
						jianlema[a[k]]=1;
						zai[a[k]]=0;
					}
				}
				zai[a[j]]=j;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<dian[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
