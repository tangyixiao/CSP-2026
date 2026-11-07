#include<iostream>
using namespace std;
int main(){
	long long n,m,cards[200000]={0},table[200000]={0},ta[200000]={0};
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>cards[i];
	}
	for(int i=0;i<n;i++){
		int fo=0;
		table[200000]={0};
		if(i>0){
			for(int j=0;j<i;j++)cards[j]=0;
		}
		for(int j=0;j<n;j++){
			if(cards[j]!=0){
				table[fo]=card[j];
				fo++;
				bool f=0;
				for(k=0;k<fo;k++ && !f){
					if(table[k]==table[fo]){
						f=1;
					}
				}
				if(f){
					table[0]=table[fo]
					for(k=1;k<fo;k++)table[k]==0;
					fo=0;
				}
			}
		}
		for(int j=0;j<fo;j++){
			ta[table[j]]++;
		}
	}
	for(int i=0,i<m,i++){
		cout<<ta[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
