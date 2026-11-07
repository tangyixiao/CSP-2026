#include<bits/stdc++.h>
using namespace std;
long long shuzhi[100005],cunchu1[100005];
char zimu[100005],zimu2[100005];
long long sum3[100005];
long long chongfu,cunchu,i2=1;
long long a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cunchu++;
		cin>>shuzhi[i]>>zimu[i]; 
		if(zimu[i]==zimu[i-1]) {
			cunchu--;
		}
		zimu2[cunchu]=zimu[i];
		cunchu1[cunchu]+=shuzhi[i];
		}
		if(cunchu==1){
			cout<<0;
			return 0;
		}
		sum3[1]=cunchu1[1];
	    for(int i=2;i<=cunchu;i++)
	    {
		   sum3[i]=sum3[i-1]+cunchu1[i];
	    }
		long long erfen=sum3[cunchu]/2;
		for(int i=1;i<=n;i++){
			if(zimu2[i]==zimu2[cunchu-i2+1]){
				chongfu+=min(cunchu1[i],cunchu1[cunchu-i2+1]);
				i2++;
			}
				a=0;
				while(1){
					 int j=i;
					 a+=cunchu1[cunchu-j+1];
					 if(zimu2[i]==zimu2[cunchu-j+1]&&cunchu1[i]<a){
					 	chongfu=chongfu+cunchu1[i]-a;
					 }
					 if(a>=cunchu1[i]) {
					 	i2=j;
					 break;}
					 j++;
				}
		  }
		cout<<erfen-chongfu-1;
		return 0;
	}

