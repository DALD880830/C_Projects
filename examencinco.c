#include <stdio.h>

int main(void)
{
    char letra;
    char *resp;
    char cad[30]= {"Biennvenido al examen"};
    resp=strchr(cad, 'i');
    if (resp)
    {
      printf(" %d", strlen(resp));  
    }
    else
    printf("No esta");

    return 0;
}
