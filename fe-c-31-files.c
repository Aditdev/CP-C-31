#include <stdio.h>
void main() {
    FILE *fp;
    int a=10;
    clrscr();
    fp= fopen("C:\\sample.txt","w");
    fprintf(fp,"%d\n",a);
    fprintf(fp,"Hello world");

    fclose(fp);
    printf("RUN SUCCESSFUL");
}
