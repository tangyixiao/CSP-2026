#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in",'r',stdin);
	freopen("catd.out",'w',stdout);
	int n,m;
	cin >> n >> m;
	int k[n],num[m];
	for(int i=0; i<m; i++){
		num[i]=0;
	}
	for(int i=0; i<n; i++){
		cin >> k[i];
	}
	vector<int> q;
	for(int i=0; i<n; i++){
		for(int j=i-1; j<n; j++){
			for(int r=0; r<q.size(); r++){
				if(q[r]==k[j] && r!=j && q[r]!=0){
					for(int sd=r; sd<j; sd++){
						q[sd]=0;
					}
				}
				
			}
			q.push_back(k[j]);
		}
		for(int j=0; j<q.size(); j++){
			num[q[i]]++;
		}
	}
	
	for(int i=1; i<=m; i++){
		cout << num[i] << ' ';
	}
	return 0;
}
