#include <stdio.h>
#include <string.h>

int main()
{
	char filelocation1[100], filelocation2[100], filelocation3[100], file0[300] = { '%','2','F' }, link[1000] = {'\0'};
	char  link1[1000] = { '\0' }, link2[1000] = { '\0' }, link3[1000] = { '\0' }, link4[1000] = { '\0' }, link5[1000] = { '\0' };
	printf("�������ļ�����·�����ļ��в��öѵ�����3�㣬·���ڵ��ַ�ӦΪ��ĸ�����ֵ�����ҳ��Ȳ��ó���100\n");
	printf("ÿ����һ���ļ���/�ļ�����һ�λس�\n");
	gets_s(filelocation1);
	gets_s(filelocation2);
	gets_s(filelocation3);
	if (filelocation2[0] == '\0')
		{
			strcat(file0, filelocation1);
		}
	else if (filelocation3[0] == '\0')
	{
		strcat(file0, filelocation1);
		strcat(file0, "%2F");
		strcat(file0, filelocation2);
	}
	else
	{
		strcat(file0, filelocation1);
		strcat(file0, "%2F");
		strcat(file0, filelocation2);
		strcat(file0, "%2F");
		strcat(file0, filelocation3);
	}
	strcat(link, "https://pcs.baidu.com/rest/2.0/pcs/file?method=download&path=");
	strcat(link, file0);
	strcat(link, "&app_id=");
	strcpy(link1, link);
	strcpy(link2, link);
	strcpy(link3, link);
	strcpy(link4, link);
	strcpy(link5, link);
	strcat(link1, "250528");
	strcat(link2, "265486");
	strcat(link3, "309847");
	strcat(link4, "266719");
	strcat(link5, "778750");
	puts(link1);
	printf("----------------------------------------------------------------------\n");
	puts(link2);
	printf("----------------------------------------------------------------------\n");
	puts(link3);
	printf("----------------------------------------------------------------------\n");
	puts(link4);
	printf("----------------------------------------------------------------------\n");
	puts(link5);
	printf("----------------------------------------------------------------------\n");
	printf("������5�����ӣ���ѡ���Ժ�����Ҽ����ƣ��������ѡȡ���С���������");
	printf("\n\n");
	return 0;
}