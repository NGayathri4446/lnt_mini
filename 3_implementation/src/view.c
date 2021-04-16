#include<header.c>
int view() {
    FILE *fp;
    char ch;
    fp = fopen("diary.txt", "r");
    if (fp == NULL){
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nYour previous note : \n\n");
    printf("===============================================================================\n");

    while( ( ch = fgetc(fp) ) != EOF ){
        printf("%c", ch);
    }
    printf("\n");
    printf("===============================================================================\n");
    fclose(fp);
    return 0;
}
