#include<bits/stdc++.h>
using namespace std;
struct Node{
	long long m;
	char c;
}a[200005];
int cnt[30];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int bj=0,ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].m>>a[i].c;
		if(a[i].c=='a'){
			cnt[1]++;
		}
		if(a[i].c=='b'){
			cnt[2]++;
		}
		if(a[i].c=='c'){
			cnt[3]++;
		}
		if(a[i].c=='d'){
			cnt[4]++;
		}
		if(a[i].c=='e'){
			cnt[5]++;
		}
		if(a[i].c=='f'){
			cnt[6]++;
		}
		if(a[i].c=='g'){
			cnt[7]++;
		}
		if(a[i].c=='h'){
			cnt[8]++;
		}
		if(a[i].c=='i'){
			cnt[9]++;
		}
		if(a[i].c=='j'){
			cnt[10]++;
		}
		if(a[i].c=='k'){
			cnt[11]++;
		}
		if(a[i].c=='l'){
			cnt[12]++;
		}
		if(a[i].c=='m'){
			cnt[13]++;
		}
		if(a[i].c=='n'){
			cnt[14]++;
		}
		if(a[i].c=='o'){
			cnt[15]++;
		}
		if(a[i].c=='p'){
			cnt[16]++;
		}
		if(a[i].c=='q'){
			cnt[17]++;
		}
		if(a[i].c=='r'){
			cnt[18]++;
		}
		if(a[i].c=='s'){
			cnt[19]++;
		}
		if(a[i].c=='t'){
			cnt[20]++;
		}
		if(a[i].c=='u'){
			cnt[21]++;
		}
		if(a[i].c=='v'){
			cnt[22]++;
		}
		if(a[i].c=='w'){
			cnt[23]++;
		}
		if(a[i].c=='x'){
			cnt[24]++;
		}
		if(a[i].c=='y'){
			cnt[25]++;
		}
		if(a[i].c=='z'){
			cnt[26]++;
		}
	}
	int maxn=-2e9;
	for(int i=1;i<=26;i++){
		if(cnt[i]>maxn){
			maxn=cnt[i];
			bj=i;
		}
		
	}
	for(int i=1;i<=26;i++){
		if(i!=bj&&cnt[i]!=0){
			for(int j=1;j<=n;j++){
				if(i==(int)a[j].c-96){
					ans+=a[j].m;
				}
			}
		}
	}
	if(n%2==0){
		cout<<ans;
	}else{
		if(a[n/2+1].m%2==0){
			cout<<ans-1;
		}else{
			cout<<ans;
		}
	}
	return 0;
} 
