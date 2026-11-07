#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	vector<int> pai(a);
	vector<int> ge(b);
	vector<bool> you(b);
	vector<int> sheng(b);
	for(int x=0;x<a;x++){
		cin>>pai[x];
	}
	for(int x=0;x<a;x++){
		for(int y=x;y<a;y++){ 
			if(you[y]){
				for(int z=0;z<a;z++){
					if(sheng[z]==y){
						for(int m=z;m<a;m++){
							you[sheng[m]]=false;
							sheng[m]=0;
						}
					}
				}
			}
			break;
		}
		for(int y=0;y<a;y++){
			ge[sheng[y]]++;
		}
	}
	for(int x=0;x<a;x++){
		cout<<ge[x];
		if(x==a-1){
			cout<<" ";
		}
	}
	return 0;
}