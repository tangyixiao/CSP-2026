#include<bits/stdc++.h>
using namespace std;
string zf[10000000];
string a1[10000000];
string a2[10000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long y1=0,y2=0;
	long long n2;
	long long n;
	char zf1;
	cin>>n;
	int sum=0,num=1;
	for(int i=1;i<=n;i++){
		cin>>n2;
		cin>>zf1;
		for(int j=1;j<=n2;j++){
			zf[num]=zf1;
			num++;
		}
		sum+=n2;
	}
	if(sum%2==0){
		for(int i=1;i<=sum;i++){
			if(i<=sum/2){
				a1[i]=zf[i];
				y1++;
			}else if(i>sum/2){
				a2[i-sum/2]=zf[i];
				y2++;
			}
		}
	}
	else{
		for(int i=1;i<=sum;i++){
			if(i<=sum/2){
				a1[i]=zf[i];
				y1++;
			}else if(i>=sum/2+2){
				a2[i-(sum/2+1)]=zf[i];
				y2++;
			}
		}
	}
	int mj=0;
	for(int i=1;i<=y1;i++){
		if(a1[i] != a2[i]){
			mj++;
		}
	}
	cout<<mj;
	return 0;
}
