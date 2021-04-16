#include<header.c>
int insert(){
    FILE *fp;
    char note[2000], date[20] ;
    welcome_message();
    printf("Enter date of your note : ");
    scanf("%s", date);
    //printf("%s",date);
    printf("\n");
    printf("Just write your note from here....\n---->>");
    scanf(" %[^\n]s",note);
    fp = fopen("diary.txt", "w");
    fprintf(fp, date);
    fprintf(fp, "\n");
    fprintf(fp, note);
    fprintf(fp, "\n\n");
    printf("\nSuccessfully Copied.....:)\n");
    fclose(fp);
    return 0;
}
