#include<bits/stdc++.h>
using namespace std;
int c[500000],e[300001];
int main()
{
	string d;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>c[i];
	}
	for(int num=1;num<=a;num++){
		for(int i=num-1;i<a;i++){
			d+=c[i]+'0';
			for(int j=i+1;j<a;j++){
				if(c[j]==(d[i]-'0')){
					i=j;
					break;
				}
			}
		}
		for(int i=1;i<=b;i++){
			for(int j=0;j<d.size();j++){
				if((d[j]-'0')==i){
					e[i]++;
					break;
				}
			}
		}

	}
	for(int i=1;i<=b;i++){
		cout<<e[i]<<" ";
	}
}
