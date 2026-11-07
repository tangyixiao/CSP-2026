#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long cards[n+1]={0};
	long long types[n+1]={0};
	long long typei=0;
	for(long long i=0;i<n;i++){
		long long a;
		cin>>a;
		cards[i]=a;
		int found=0;
		for(long long j=0;j<n;j++){
			if(types[j]==a){
				found=1;
				break;
			}
		}
		if(!found){
			types[typei]=a;
			typei++;
		}
	}
	long long typef[typei+1]={0};
	for(long long i=0;i<n;i++){
		long long desk[n+1]={0};
		long long deski=-1;
		for(int j=i-1;j<n;j++){
			int found=0;
			for(long long m=0;m<n;m++){
				if(desk[m]==cards[j]){
					found=1;
					for(long long p=m;p<deski;p++){
						desk[p]=0;
						deski=m;
					}
				}
			}
			desk[deski]=cards[j];
			deski++;
		}
		for(long long t=0;t<typei;t++){
			long long p=types[t];
			for(long long d=0;d<deski;d++){
				if(desk[d]==p){
					typef[t]++;
					break;
				}
			}
		}
	}
	for(long long i=0;i<typei;i++){
		cout<<typef[i]<<" ";
	}
	return 0;
}
