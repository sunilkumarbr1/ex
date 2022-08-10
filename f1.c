#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char name[80];
char str[100];
int r;
fp = fopen("student.txt", "r");
if(fp == NULL)
{
	printf("File not found");
	exit(0);
}
//fscanf(fp, "%s %d", name, &r);
//printf("name:%s usn:%d",name,r);

fgets(str,200,fp);
printf("fgets string:%s\n",str);
fclose(fp);
}
