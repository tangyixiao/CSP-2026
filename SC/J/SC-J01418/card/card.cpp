#include<iostream>
using namespace std;
int cards[500000],ans[300000];
int main(){
	freopen("card.in","r","stdin");
	freopen("card.out","w","stdout");
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>cards[i];
	}
	for(int i=1;i<=n;i++){
		int temp[n];
		for(int j=0;j<n;j++){
			temp[j]=cards[j];
		}
		int head=temp[0],haed=0;
		while(head>=0){
			for(int j=haed;j<n;j++){
				if(temp[j]==head){
					haed=j;
					break;
				}
				else{
					temp[j]=0;
				}
			}
			int num[m];
			for(int j=0;j<n;j++){
				if(num[temp[j]]!=1){
					num[temp[j]]=1;
				}
				else{
					break;
				}
				if(j==n-1){
					head=-1;
				}
			}
		}
		for(int j=0;j<n;j++){
			if(temp[j]>0){
				ans[temp[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
//3 1 2 1 3 2 3 1 2 1->0 0 0 0 0 0 3 0 0 1
//1 2 1 3 2 3 1 2 1->0 0 1 0 0 3 0 0 1
//2 1 3 2 3 1 2 1->0 0 0 0 0 0 2 1
//1 3 2 3 1 2 1->0 0 0 0 0 0 1
//3 2 3 1 2 1->0 0 3 0 0 1
//2 3 1 2 1->0 0 0 2 1
//3 1 2 1->3 0 0 1
//1 2 1->0 0 1
//2 1->2 1
//1->1
//有规律的 