#include<bits/stdc++.h>
using namespace std;
vector<int> v,ton={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
    for(int i=0;i<v.size();i++){
    	vector<int> ton2={0};
    	for(int j=i;j<v.size();j++){
    		ton2[v[j]]++;
    		if(ton2[v[j]]>1){
    			for(int k=j;k>=0;k++){
    				if(v[k]==v[j]) break;
    				else ton[v[k]]--;
				}
			}
		}
		for(int j=0;j<ton2.size();j++){
			ton[j]+=ton2[j];
		}
	}
	for(int i=0;i<ton.size();i++){
		cout<<ton[i]<<" ";
	}
	return 0;
}
