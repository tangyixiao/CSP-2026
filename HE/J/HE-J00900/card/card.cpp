#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500001];
int desk[500001];
int flow[300001];
int flown[300001];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int q=0;q<n;q++){
		for(int i=0;i<n;i++){
			desk[i]=0;
		}
		for(int i=0;i<=m;i++){
			flown[i]=0;
		}
		int top=0;
		for(int i=q;i<n;i++){
			for(int j=0;j<=top;j++){
				if(desk[j]==a[i]){
					for(int k=j;k<=top;k++){
						desk[k]=0;
					}
					top=j;
					break;
				}
			}
			desk[top]=a[i];
			top++;
		}
		for(int i=0;i<n;i++){
			if(desk[i]!=0){
				flown[desk[i]]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(flown[i]==1){
				flow[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<flow[i]<<" "; 
	}
	//苏维埃正红旗  带你品鉴红色泥头车 
	//我的天哪starfall大人 
	return 0;
}

