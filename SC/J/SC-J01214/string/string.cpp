#include <bits/stdc++.h>
using namespace std;
long long myh[200005];
char wxl[200005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long qwe,sum=0;
	cin>>qwe;
	for(int i=1;i<=qwe;i++){
		cin>>myh[i]>>wxl[i];
	}
	int i=1,j=qwe;
	while(i<j){
		if(wxl[i]==wxl[j]){
			if(myh[i]>myh[j]){
				myh[i]-=myh[j];
				j--;
			}else if(myh[i]<myh[j]){
				myh[j]-=myh[i];
				i++;
			}else{
				i++;
				j--;
			}
		}else{
			if(myh[i]>myh[j]){
				myh[i]-=myh[j];
				sum+=myh[j];
				j--;
			}else if(myh[i]<myh[j]){
				myh[j]-=myh[i];
				sum+=myh[i];
				i++;
			}else{
				sum+=myh[j];
				i++;
				j--;
			}
		}
	}
	cout<<sum;
	return 0;
}