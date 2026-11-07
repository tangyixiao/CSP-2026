#include<bits/stdc++.h>
using namespace std;
long long num[100000];
long long tma[200000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m,ma=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<m;i++){
		if(i==0){
			for(int j=0;j<n;j++){
				if(num[j]>tma[i]&&num[j]%2!=0){
					tma[i]=num[j];
					num[j]=0;
				}
			}
		}
		else{
			for(int j=0;j<n;j++){
				if(num[j]>tma[i]&&num[j]<=tma[i-1]){
					tma[i]=num[j];
					num[j]=0;
				}
			}
			
		}
	}
	/*for(int i=0;i<m;i++){
		cout<<tma[i]<<" ";
	}*/
	ma=tma[0];
	for(int i=1;i<m;i++){
		ma=ma&tma[i];
	}	
	cout<<ma;
//	&&num[j]<tma[j+1]
	fclose(stdin);
	fclose(stdout);
	return 0;
}
