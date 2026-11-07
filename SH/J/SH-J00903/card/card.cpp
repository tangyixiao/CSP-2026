#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<x<<endl;

typedef unsigned long long ull;

int nums[3*100000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m,n;
	cin>>n>>m;
	vector<int> a(n+1); 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//cout<<a[i]<<endl;
	}
	for(int i=1;i<=n;i++){
		/*
		for(int j=1;j<=i-1;j++){
			a.erase(a.begin()+j);
		}*/
		vector<int>desk;
		for(int j=i;j<=n;j++){
			int k=a[j];
			//cout<<i<<endl;
			for(int p=0;p<desk.size();p++){
				if(desk[p]==k){
					//cout<<k<<"在桌上存在"<<endl;
					for(int p2=p;p2<desk.size();){
						//cout<<desk[p2]<<"被收走！"<<p2<<desk.size()<<endl; 
						desk.erase(desk.begin()+p2);
						//cout<<p2<<desk.size()<<endl;  
						//cout<<1;
					}
					break;
				}
			}
			desk.push_back(k);
			
			//cout<<k<<"放在最右端!"<<endl;
			//debug(j);
		}
		//debug(2);
		
		for(int j=1;j<=m;j++){
			for(int p=0;p<desk.size();p++){
				if(desk[p]==j){
					//cout<<desk[p]<<" ";
					nums[i]++;
				}
			}
			//cout<<endl;
		}
		
		/*
		for(int j=1;j<=m;j++){
			if()
		}*/
	}
	//cout<<"abcde"; 
	for(int i=1;i<=m;i++){
		cout<<nums[i]<<" "; 
	}
	return 0;
}

