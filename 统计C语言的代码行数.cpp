#include<stdio.h>
int main()
{
	int i,t,sum=0,lines[100000];
	FILE *fp;
	char filename[261];
	for(i=0;;i++)
	{
	   printf("�������ļ������ļ���ַ:");
	   gets(filename);
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
	printf("�ļ������ļ���ַ�������\n");continue;
	}
    fclose(fp);
	printf("%s��%d�д���\n",filename,lines[i]);
    sum=sum+lines[i];
	printf("��ֹĿǰһ��%d�д���\n",sum);
   } 
   return 0;
}
