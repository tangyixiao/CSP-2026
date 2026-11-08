#include<bits/stdc++.h>

using namespace std;
const int mmax=5*1e5+5;
const int mmin=3*1e5;
int yat[mmax]={0};
int at[mmin]={0};
struct y{
	int id;
	int num;
}n[mmin]={0};

int n1[mmin]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	
	for(int i=1;i<=n;i++){
		cin >> yat[i];
	}
	for(int i=0;i<n;i++){
		int k=n-i;
		while(k--){
			int num1=at[i];
			at[i]=yat[i];
			n[num1].num++;
			if(n[num1].num==2){
				for(int j=n[num1].id;j<i;j++){
					at[j]=0;
				}
				at[n[num1].id]=at[i];
				at[i]=0;
			}
		
		}
	}
	
	for(int j=1;j<=k;j++){
		if(at[j]==0){
			break;
		}else{
			n1[at[j]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout << n1[i] << " ";
	}
	
	return 0;
}
