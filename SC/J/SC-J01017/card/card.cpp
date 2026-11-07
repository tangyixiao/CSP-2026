#include<bits/stdc++.h>
long long top,cnt[300005],s[500005],st[5000005],n,m;
bool is[300005];
long long read(){
	long long num=0;
	char a;
	a=getchar();
	while('0'<=a&&a<='9'){
		num=num*10+a-'0';
		a=getchar();
	}
	return num;
}
void write(long long a){
	if(a>9){
		write(a/10);
	}
	putchar(a%10+'0');
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		s[i]=read();
	}
	int j=1;
	while(j<=n){
		for(int i=1;i<=m;i++){
			is[i]=0;
		}
		for(int i=j;i<=n;i++){
			if(is[s[i]]){
				while(st[top]!=s[i]){
					is[st[top]]=0;
					top--;
					
				}
			}else{
				top++;
				st[top]=s[i];
				is[s[i]]=1;
			}
		}
		while(top){
			cnt[st[top]]++;
			top--;
		}
		j++;
	}
	for(int i=1;i<=m;i++){
		write(cnt[i]);
		putchar(' ');
	}
	return 0;
}