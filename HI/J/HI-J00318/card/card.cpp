#include<bits/stdc++.h>
using namespace std;
int n[200005];
int p[3005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a=0,b=0,c=1;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>n[i];
	}
	int h=1;
	for(int i=1;i<=a;i++){
		for(int j=c;j<=a;j++){
			if(n[j]==n[j+1]){
				
			}else{
				p[n[j]]++;
			}
		}
		c++;
	}
	for(int i=1;i<=b;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}
