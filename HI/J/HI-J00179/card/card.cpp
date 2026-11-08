#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[1000];
int s[1000];
int ans1,ans2,ans3,ans4,ans5;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int j=2;j<=n;j++){
		for(int m=1;m<j;m++){
			if(a[m]==a[j]){
				for(int x=m;m<=j;m++){
					s[x-m]=a[x];
				}
			}
		}
	}	
	for(int v=1;v<=100;v++){
		if(a[v]==1){
			ans1++;
		}else if(a[v]==2){
			ans2++;
		}else if(a[v]==3){
			ans3++;
		}else if(a[v]==4){
			ans4++;
		}else if(a[v]==5){
			ans5++;
		}
	}
	if(n==3){
		cout<<ans1<<" "<<ans2<<" "<<ans3;
	}else if(n==4){
		cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4;
	}else if(n==5){
		cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<" "<<ans5;
	}
	return 0;
}//

