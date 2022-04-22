#include <stdio.h>
#include <string.h>
int main() {

    char *str;
    printf("Input Value: ");
    scanf("%s",str);
    printf("str is = %s address is (%p)\n",str,&str) ;
    for (int i = 0 ; i < strlen(str) ; ++i ){
        printf("str[%d] = %c address is (%p)\n",i,str[i],&str[i]);

    }



}