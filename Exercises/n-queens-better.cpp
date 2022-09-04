#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int n,tot,C[10];
bool vis[3][10]; 
void search(int cur){ 
	if(cur == n)tot++;
	else for(int i=0;i<n;++i)
	if(!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+n]){
		C[cur]=i;
		vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=true;
	    search(cur+1);
	    vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=false;
	}
}
int main() {
  while(scanf("%d",&n)){
  	memset(C,0,sizeof(C));tot=0;memset(vis,0,sizeof(vis));
    search(0);printf("%d\n",tot);
  }
  return 0;
}
