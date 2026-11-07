#include<bits/stdc++.h>
using namespace std;
int n,m,msum[3001],l=0,table[5001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int> card;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		card.push_back(x);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=0;k<l;k++){
//				cout<<card[j]<<" "<<table[k]<<endl;
				if(card[j]==table[k]){
//					cout<<" te"<<l<<" "<<j<<k<<endl;
					l=k;
					continue;
				}
			}
			table[l]=card[j];
			l++;
		}
		for(int j=0;j<l;j++){
//			cout<<table[j]<<" "<<l<<endl;
			msum[table[j]]++;
		}
		l=0;
		cout<<endl;
		
	}
	for(int i=0;i<m;i++){
		cout<<msum[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
