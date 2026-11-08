#include<bits/stdc++.h>
using namespace std;
int a,m,n[100050],s[100050],w[100050],p[100050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>m;
	for(int i=1;i<=a;i++){
		cin>>n[i];
	}
	for(int i=1;i<=a;i++){
		int box=1;
		for(int j=i;j<=a;j++){
			int e=0;
			for(int k=1;k<=box;k++){
				if(w[k]==n[j]){
					for(int f=k;f<=box;f++){
						w[f]=0;
					}
					e=k;
				}
			}
			if(e!=0){
				w[e]=n[j];
			}else{
				w[box]=n[j];
				box++;
			}
		}
		for(int j=1;j<=box;j++){
			for(int k=1;k<=m;k++){
				if(w[j]==k&&p[k]!=1){
					s[k]++;
					p[k]=1;
				}
			}
		}
		for(int j=1;j<=m;j++){
			p[j]=0;
		}
	}
	for(int j=1;j<=m;j++){
		cout<<s[j]<<' ';
	}
	return 0;
}
