#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
int n,tot;
bool vis[3][20]; 
void search(int cur){ 
	if(cur == n)tot++;
	else for(int i=0;i<n;++i)
	if(!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+n]){
		vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=true;
	    search(cur+1);
	    vis[0][i]=vis[1][cur+i]=vis[2][cur-i+n]=false;
	}
}
int main() {
  scanf("%d",&n);
  search(0);printf("%d\n",tot);
  return 0;
}
