#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,c[10005],abcs[10005]={0};
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	for(int z=0;z<a;z++){
		int s=0;
		int d[10005]={0};
		for(int i=z;i<a;i++){
			for(int x=0;x<s;x++){
				if(d[x]==c[i]){
					for(int j=i;j<s;j++){
						d[j]=0;
						s=x;
						break;
					}
				}
			}
			d[s]=c[i];
			s++;
		}
		for(int j=0;j<b;j++){
			abcs[d[j]]+=1;
		}
	}
	for(int i=1;i<=b;i++){
		cout<<abcs[i]<<' ';
	}
}
