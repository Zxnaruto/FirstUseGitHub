

#include"print.h"


char hint[80]="�밴��ʾ���룡����";

void menu()
{
	printLine();
	printTitle("ѧ����Ϣ����ϵͳ");
	printLine();
	printTitle("����ָ�ִ����Ӧ�Ĳ���");
	printTitle("1.ѧ����Ϣ¼��      2.ѧ����Ϣ��ѯ");
	printTitle("3.ѧ����Ϣɾ��      4.ѧ����Ϣ����");
	printTitle("5.ѧ����Ϣ�޸�      6.ѧ����Ϣ����");
	printTitle("7.ѧ����Ϣ��ʾ      8.�˳�ϵͳ    ");
	printLine();
	printTitle(hint);       //��ʾ��Ϣ
	printLine();



}


void SetHint(const char *s)
{
	strcpy(hint,s);//������ʾ��Ϣ
}

void ModelMenu(const char *s)
{
	printLine();
	printTitle(s);
	printLine();

}