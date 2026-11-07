#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,llen; 
string l="";
int cnt=0;
char c;
struct edge{
	long long num;
	char letter;
}e[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>e[i].num >>e[i].letter ;
		llen+=e[i].num;
	}
	for(int i=1,j=n+1-i;i<=j;){
		if(e[i].num > e[j].num ){
			if(e[i].letter !=e[j].letter ){
				cnt+=e[j].num;
				
				e[i].num -=e[j].num;
				j--;
			}else{
				e[i].num -=e[j].num;
				j--;
			}
		}else if(e[i].num==e[j].num ){
			if(e[i].letter!=e[j].letter ){
				cnt+=e[i].num;
			}
			i++;
			j--;
		}else{
			if(e[i].letter !=e[j].letter ){
				cnt+=e[i].num;
				
				e[j].num -=e[i].num;
				i++;
			}else{
				e[j].num -=e[i].num;
				i++;
			}
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
