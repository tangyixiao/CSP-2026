#include<bits/stdc++.h>
using namespace std;
bool not_use[200000+5];
int numbers[200000+5];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>numbers[i];
	}
	int now=0;
	if(m==1){
		int max=-1; 
		for(int i=1;i<=n;i++){
			if(numbers[i]>max){
				max=numbers[i];
			}
		}
		cout<<max;
		return 0;
	} 
	int max2=-1;
	int maxa=-1;
	int maxb=-1;
	if(m>=2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int tmp1=(numbers[i] & numbers[j]);
				if(tmp1>max2){
					max2=tmp1;
					maxa=i;
					maxb=j;		 
				}
			}	
		}
	}
	not_use[maxa]=1;
	not_use[maxb]=1;
	now=max2; 
	if(m==2){
		cout<<max2;
		return 0;
	}
	for(int i=3;i<=m;i++){
		int max3=-1;
		int max3a=-1;
		for(int j=1;j<=n;j++){
			if(not_use[j]==0 && (now& numbers[j])>max3){
				max3=(now& numbers[j]);
				int max3a=j;
			}
		} 
		numbers[max3a]=1;
		now=max3;
	} 
	cout<<now;
	return 0;
} 
