#include"print.h"


void printLine()
{
	int i;
	for(i=0;i<80;i++)
		putchar('*');
}




void printTitle(const char*title)
{
	int i;
	int length= strlen(title);//������ⳤ��
	putchar('*');
	for(i=0;i<(80-2-length)/2;i++)
		putchar(' ');            //����ո�
	printf("%s",title);          //�������
	for(i=i+length-1;i<77;i++)   
		putchar(' ');        //����ʣ��ո�
	putchar('*');
}