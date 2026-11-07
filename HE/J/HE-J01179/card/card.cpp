#include<iostream>
using namespace std;
int main(){
	long long n,m,s[200000]={0},table[200000]={0},ta;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>s[i];
	}
	for(int i=0;i<n;i++){
		int fo=0;
		table[200000]={0};
		if(i>0){
			for(int j=0;j<i;j++)s[j]=0;
		}
		for(int j=0;j<n;j++){
			if(card[j]!=0){
				table[fo]=card=[j];
				fo++;
				bool f=0;
				for(k=0;k<fo;k++;&&|f){
					f=1;
				}
			}
			if(f){
				table[0]=table[fo]
				for(k=1;k<fo;k++)table[k==0];
				fo=0;
			}
		}
	}
	for(j=0;j<fo;j++){
		ta[table[j]]
	}
	cout<<i<<j;
	return 0;
}

