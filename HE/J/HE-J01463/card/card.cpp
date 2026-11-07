#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	int num=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=m;i++){
		int t[n+1]={0};
		int num2=0;
		for(int i2=1;i2<=n;i2++){
			for(int j=i;j<=i2;j++){
				if(t[a[j]]==0){
					t[a[j]]=j;
					if(a[j]==i){
						num2++;
					}
				}else{
					for(int t2=t[a[j]];t2<j;t2++){
						if(a[t2]==i){
							num2--;
						}
					}t[a[j]]=j;
				}
			}
		}if(num2>0){
			num++;
		}
		cout<<num<<' ';
	}return 0;
}
