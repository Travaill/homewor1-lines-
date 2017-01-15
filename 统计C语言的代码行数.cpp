#include<stdio.h>
int main()
{
	int i,t,sum=0,lines[100000];
	FILE *fp;
	char filename[100000];
	for(i=0;;i++)
	{
	   printf("请输入文件名或文件地址:");
	   scanf("%s",filename);
	   fp=fopen(filename,"rt"); 
	   if(fp!=NULL)
      {
	       while((t=fgetc(fp))!=EOF)
	      {
		      if(t=='\n')
		     {
			    lines[i]=lines[i]+1;
		     }
	      }
       }
    else 
	{
	printf("文件名或文件地址输入错误\n");continue;
	}
    fclose(fp);
	printf("%s共%d行代码\n",filename,lines[i]);
    sum=sum+lines[i];
	printf("截止目前一共%d行代码\n",sum);
   } 
   return 0;
}
