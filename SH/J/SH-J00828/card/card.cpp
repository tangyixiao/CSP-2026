#include <bits/stdc++.h>
using namespace std;

int m,n,card[500005]={0}, fh[300005]={0}, fon[300005]={0}, kp[500005]={0};

int main(){

    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    cin>>n>>m;
    for(int i = 1; i <= n; i++){
    	cin>>card[i];
	}



	for(int i = 1; i <= n; i++){
		memset(fon, 0, sizeof(fon));
		memset(kp, 0, sizeof(kp));
		// card[j]:dianshu  fon[card[j]]gai dianshu pai zai paidui li d weizhi.
		for(int j = i; j <= n; j++){
			if(fon[card[j]]==0){
				fon[card[j]]=j;
				kp[j]=card[j];
			}else{
				for(int k = fon[card[j]]; k <= j; k++){
					fon[kp[k]]=0;
					kp[k]=0;
				}
				fon[card[j]]=j;
				kp[j]=card[j];
			}
		}
		for(int j = i; j <= n; j++){
			if(kp[j]!=0){
				fh[kp[j]]++;
			}
		}


		/*
		for(int i = 1; i <= m; i++){
			cout<<fh[i]<<" ";
		}
		cout<<endl;*/
	}




	for(int i = 1; i <= m; i++){
		cout<<fh[i]<<" ";
	}
	cout<<endl;

    return 0;
}
