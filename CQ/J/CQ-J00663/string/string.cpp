#include<bits/stdc++.h>
using namespace std;
long long a[100000008];
char b[100000008];
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
			cin>>a[i];
			cin>>b[i];
		}
				
	int sum=0;
	int num=0,nnm=0;
	int y=1;
	for(int i=1;i<n;i++){
		if(b[i-1]!=b[i]){
			sum++;
			y=1;
			nnm=0;
		}else{
			if(y==1){
				nnm+=a[i-1]+a[i];
				y++;
			}else{
				num+=a[i];
				y++;
			}
		
			num==max(num,nnm);
		}
	}
	int ssst=1;
	if(sum!=0){
		cout<<2;	
	}else{
		cout<<0;
	}
}
