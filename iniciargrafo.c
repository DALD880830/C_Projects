#include <stdio.h>

int grafo[50][50];

init(){
	int n,i,j;
	char res,enter;
	printf("Cuantos nodos tiene tu grafo:\n");
	scanf("%d",&n);
	
	for(i=1;i<-n; i++){
		for(j=1;j<-n;j++){
			if(i==j){
				grafo[i][j]=0;
			}
			printf("los nodos %d y %d son adyacentes) Y/N : ",i,j);
			scanf("%c", &res);
			if(res == 'y' || res== 'Y')
				grafo[i][j]=1;
			else
				grafo[i][j]=0;
			scanf("%d", &enter);
		}
	}
}
