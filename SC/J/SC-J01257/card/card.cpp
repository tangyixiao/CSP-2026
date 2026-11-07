//#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int a[500005];
int t[500005]={0};
int sum[500005]={0};

int desk[500005]={0};

void init(int);

int main()
{
	ifstream cin("card.in");
	ofstream cout("card.out");
	
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	int k=1;
	for(int i=1;i<=n;i++){
		k=1;
		init(m);
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){
				t[a[j]]=1;
				desk[k]=a[j];
				k++;
			}
			else{
				k--;
				while(desk[k]!=a[j]){
					t[desk[k]]=0;
					k--;
				}
				k++;
			}
		}
		
		for(int j=1;j<=n;j++){
			sum[j]+=t[j];
		}
	}
	
	int i=1;
	while(i<m){
		cout<<sum[i]<<' ';
		i++;
	}
	cout<<sum[m];
	
	return 0;
}

void init(int n){
	for(int i=1;i<=n;i++) t[i]=0;
	return;
}
