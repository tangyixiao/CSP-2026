#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//输入过程
	int n,a;
	cin >> n >> a;
	int card[n];
	for(int i=0;i<n;i++){
		cin >> card[i];
	}
	//一局
	int answer[a]={0};
	int cnt=0;
	int copy[n];
	for(int i=0;i<n;i++){
		copy[i]=card[i];
	}
	while(cnt<n){
		for(int i=cnt;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(copy[i]==copy[j]){
					for(int k=i;k<j;k++){
						copy[k]=0;
					}
					i=j-1;
					break;
				}
			}
		}
		for(int j=cnt;j<n;j++){
			if(copy[j]!=0){
				answer[copy[j]]++;
			}
		}
		cnt++;
		for(int j=cnt;j<n;j++){
			copy[j]=card[j];
		}
	}
	//答案输出
	for(int i=1;i<=a;i++){
		cout << answer[i] << " ";
	}
	return 0;
}