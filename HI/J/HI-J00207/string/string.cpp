#include <bits/stdc++.h>
using namespace std;
struct node{
	long long xb=0;
	char h;
}s[1990000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].xb;
		cin>>s[i].h;
	}
	long long sum=0;
	int x=0,y=n-1;
	while(x<y){
		if(s[x].h==s[y].h && s[x].xb==s[y].xb){
			x++;
			y--;
			continue;
		}else{
			if(s[x].h==s[y].h){
				if(s[x].xb>s[y].xb){
					s[x].xb=s[x].xb-s[y].xb;
					x--;
				}else{
					s[y].xb=s[y].xb-s[x].xb;
					y++;
				}
			}else{
				if(s[x].xb>s[y].xb){
					sum+=s[y].xb;
					s[x].xb=s[x].xb-s[y].xb;
					x--;
				}else{
					sum+=s[x].xb;
					s[y].xb=s[y].xb-s[x].xb;
					y++;
				}
				
			}
		}
		x++;
		y--;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
