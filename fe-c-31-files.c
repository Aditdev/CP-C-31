#include <stdio.h>

int main() {
    int a=10;
    File *f;
    f= fopen("C:\\Newfile\\sample.txt","w");
    fprintf(fp,"%d",a)
    fprintf(fp,"Hello world");
    fclose(f);
    return 0;
}