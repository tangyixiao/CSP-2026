#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[600860];//原数组 
int b[600860],h=0,s[600860];//打出的牌，打出的长度，打出的牌记录个数 
int c[600860];//每局剩余牌计数 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		h=0;
		for(int j=i;j<=n;j++){
			if(s[a[j]]!=0){
				h=s[a[j]];
				for(int z=h+1;z<=n;z++){
					s[z]=0;
				}
			}else{
				h++;
				b[h]=a[j];
				s[a[j]]=h;
			}
		}
		for(int j=1;j<=h;j++){
			c[b[j]]++;
		}
		for(int j=1;j<=m;j++){
			s[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
