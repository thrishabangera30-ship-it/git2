#include<stdio.h>
int main()
{
FILE*fp1,*fp2;
char ch;
fp1=fopen("input.txt","r");
fp2=fopen("output.txt","w");
while(1)
{
ch=fgetc(fp1);
if(ch==EOF)
break;
else
putch(ch,fp2);
}
printf("file copying is completed");
fclose(fp1);
fclose(fp2);
}

