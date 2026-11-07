#include<iostream>
using namespace std;
int a[500005],b[1000010],arr[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int weizhi=n;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			bool z=false;
			for(int l = 1;l <= n;l++){
				if(z==true){
					b[l]=0;
					weizhi--;
				}
				else if(b[l]==a[j]){
					z=true;
					continue;
				}
			}
			if(z==false){
				b[weizhi+1]=a[j];
				weizhi++;
			}
		}
		for(int j = 1;j <= weizhi;j++)arr[b[j]]++;
		for(int j = 1;j <= n;j++)b[j]=a[j];
		weizhi=n;
	}
	for(int i = 1;i <= m;i++)cout<<arr[i]<<" ";
	return 0;
}