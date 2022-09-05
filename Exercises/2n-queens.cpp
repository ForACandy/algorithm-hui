#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int n,tot,B[10],W[10];
bool chess[10][10];
void bsearch(int cur){ 
	if(cur == n)tot++;
	else for(int i=0;i<n;++i){
		if(!chess[cur][i]||W[cur]==i)continue;
		bool ok=true;
		B[cur]=i;//abs(cur-j)==abs(B[cur]-B[j])
		for(int j=0;j<cur;++j)
	      if(B[cur]==B[j]||cur-B[cur]==j-B[j]||cur+B[cur]==j+B[j])
	      {ok=false;break;}
	    if(ok)bsearch(cur+1);
	}
}
void wsearch(int cur){ 
	if(cur == n)bsearch(0);
	else for(int i=0;i<n;++i){
		if(!chess[cur][i])continue;
		bool ok=true;
		W[cur]=i;
		for(int j=0;j<cur;++j)
	      if(W[cur]==W[j]||cur-W[cur]==j-W[j]||cur+W[cur]==j+W[j])
	      {ok=false;break;}
	      if(ok)wsearch(cur+1);
	}
}

int main() {
  scanf("%d",&n);
  for(int i=0;i<n;++i)for(int j=0;j<n;++j)scanf("%d",&chess[i][j]);
  wsearch(0);printf("%d\n",tot);
  return 0;
}
