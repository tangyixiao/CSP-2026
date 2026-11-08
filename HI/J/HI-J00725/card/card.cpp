#include<bits/stdc++.h>
using namespace std;
int y[500009];
int m1[300009];
int we[500000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int a,s;
    cin>>a,s;
    for(int i=1;i<=a;i++){
    	cin>>y[i];
	}
	int w=a;
	int ert=1;
	for(int o=1;o<=a;o++){
	for(int i=ert;i<=a;i++){
		for(int j=i;j<=a;j++){
			if(y[j]==we[j]){
				w=j;
				break;
			}
		}
		for(int j=w;j<=a;j++){
			we[j]=0;
		}
		we[w]=y[i];
		w=0;
		ert+=1;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=s;j++){
				if(we[i]==j){
					m1[i]+=1;
				}
			}
		}
	}
}
    for(int i=1;i<=m;i++){
    	cout<<m[i];
	}
	return 0;
}
