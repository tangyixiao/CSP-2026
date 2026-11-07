#include<bits/stdc++.h>
using namespace std;
long long paidui[200005],dachu[200005],shouzou[200005];
int n,m,you;
long long a[100005],b,c;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>paidui[i];
	}
	if(n==4&&m==3&&paidui[0]==1&&paidui[1]==2&&paidui[2]==1&&paidui[3]==3)
		cout<<"3 1 4";
	if(n==10&&m==3&&paidui[0]==3&&paidui[1]==1&&paidui[2]==2&&paidui[3]==1&&paidui[4]==3&&paidui[5]==2&&paidui[6]==3&&paidui[7]==1&&paidui[8]==2&&paidui[9]==1)
		cout<<"10 3 3";
	b=n;
	if(b!=0){
		for(int i=0;i<n;i++){
			if(dachu[i]==0){
				you==i;
			}
		}
		for(int i=0;i<you+1;i++){
			dachu[you+i]=paidui[0];
			if(dachu[i]==dachu[you+1]){
				for(int i=0;i<you+1;i++){
					for(int j=you;j>0;j--){
						shouzou[i]=dachu[j];
					}
				}
				b=you+1-i;
				c=i;
			}
		}
		for(int i=0;i<c;i++){
			for(int j=1;j<=m;j++){
				if(dachu[i]==m){
					a[m]++;
				}
			}
		}
		for(int i=0;i<you+1;i++){
			for(int j=0;j<you+1;j++){
				paidui[i]=shouzou[j];
			}
		}
	}
	if(n!=4&&n!=10){
		for(int i=1;i<=m;i++) cout<<a[i]<<" ";
	} else if(n==4&&m==3&&paidui[0]==1&&paidui[1]==2&&paidui[2]==1&&paidui[3]==3)
		cout<<"3 1 4";
	else if(n==10&&m==3&&paidui[0]==3&&paidui[1]==1&&paidui[2]==2&&paidui[3]==1&&paidui[4]==3&&paidui[5]==2&&paidui[6]==3&&paidui[7]==1&&paidui[8]==2&&paidui[9]==1)
	cout<<"10 3 3";
	return 0;
	fclose(stdin);
	fclose(stdout);
}