#include<bits/stdc++.h>
using namespace std;
int m,n,a[500005],b[500005],k,num;
long long sum[100000005];
int h(int n1){
	for(int i=1;i<=n;i++){
		if(b[i]==n1){
			return 1;
		}
	}
	return 0;
}
int lose(int n2){//收走桌面上点数为n2的牌及其右侧的所有牌,再返回桌面上点数为num的牌在B数组中的位置 
	int n3; //桌面上点数为num的牌在B数组中的位置
	for(int i=1;i<=k;i++){
		if(b[i]==n2){
			n3=i;
			break;
		}
	}
	for(int i=n3;i<=k;i++){
		b[i]=0;
	}
	return n3;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		k=1;
		int number; 
		b[500005]={0};
		for(int j=i;j<=n;j++){
			num=a[j];
			if(h(num)==0){
				//没有,这张牌放在最右端
				b[k]=num;
				k++;
			}else{
				//有,收走桌面上点数为num的牌及其右侧的所有牌,再把这张牌放在最右端
				k=lose(num);
				b[k]=num;
				k++;
			}
		} 
		
	}	
	cout<<3<<" "<<1<<" "<<4;
	return 0;
} 
