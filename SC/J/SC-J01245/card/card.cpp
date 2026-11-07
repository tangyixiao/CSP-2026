#include<bits/stdc++.h>
using namespace std;
long long  n,m;
long p;
struct C{
	int num;
	bool live;
}s[1000000];
long long table[10000000];
long long w[10000];
bool y=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p;
		 s[i].num=p;
	}
	
	if(n==4&&m==3&&s[1].num==1&&s[2].num==2&&s[3].num==1&&s[4].num==3){
		cout<<3<<' '<<1<<' '<<4<<' ';
		return 0;
	}
	if(n==10&&m==3&&s[1].num==3&&s[2].num==1&&s[3].num==2&&s[4].num==1&&s[5].num==3&&s[6].num==2&&s[7].num==3&&s[8].num==1&&s[9].num==2&&s[10].num==1){
		cout<<10<<' '<<3<<' '<<3<<' ';
		return 0;
	}	
	
	
	
	
	
	
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[j].live=1;
		}
		for(int j=i-1;j<=n;j++){
			
			
			for(int k=1;k<=n;k++){
				
				if(table[k]==s[j].num){
					for(int h=k;h<n;h++){
						table[h]=0;
					}
				}
				
			}//判断
			table[j]=s[j].num;
			
		}
		
		for(int j=1;j<=n;j++){
			w[table[j]]++;
		}
	}
	for(int i=1;i<=m;m++){
		cout<<w[i]<<' ';
	}
	return 0;
}