#include"student.h"
#include"menu.h"
#include"print.h"



void Input()
{
	int i=0;
	char l;
	system("cls");
	ModelMenu("¼��ѧ����Ϣ");
	i=StNum;
	printf("��������%d��ѧ����Ϣ��",i++);
	printf("\n�����%d��ѧ����ѧ����ţ�",i);
	scanf("%s",&stu[i].num);
	printf("\n�����%d�������ѧ��������",i);
	scanf("%s",&stu[i].name);
	printf("\n�����%d��ѧ�����Ա�",i);
	scanf("%s",&stu[i].sex);
	printf("\n�����%d��ѧ�������䣺",i);
	scanf("%d",&stu[i].age);
	printf("\n�����%d��ѧ�������ĳɼ���",i);
	scanf("%f",&stu[i].score.Chinese);
	printf("\n�����%d��ѧ������ѧ�ɼ���",i);
	scanf("%f",&stu[i].score.Math);
	printf("\n�����%d��ѧ����Ӣ��ɼ���",i);
	scanf("%f",&stu[i].score.English);
	printf("\n�����%d��ѧ���������ɼ���",i);
	scanf("%f",&stu[i].score.PE);

	stu[i].score.sum+=stu[i].score.Chinese+stu[i].score.Math+stu[i].score.English+stu[i].score.PE;
	print();
	StNum++;

	printf("�Ƿ�������룿��Y/N��:");
	getchar();
	scanf("%c",&l);
	if(l=='n'||l=='N')
		return;
	else if(l=='y'||l=='Y')
	{
		system("cls");
		Input();
	}


}




void Search()
{
	int i=0,flag=1;
	char str[20];
	char l;
	system("cls");
	ModelMenu("��ѯѧ����Ϣ");
	printf("������Ҫ���ҵ�ѧ������ţ�");
	scanf("%s",&str);

	for(i=0;i<N;i++)
	
		if((strcmp(str,stu[i].num))==0)
		{
			print();
			flag=0;
		}
		if(flag==1)
		printf("�޴���ţ�\n");
		printf("�Ƿ�������룿��Y/N��:");
	getchar();
	scanf("%c",&l);
	if(l=='n'||l=='N')
		return;
	else 
	
		system("cls");
		


	
}






void Del()
{
	int i,j,flag=1;
	char str[20];
	char l;
	system("cls");
	ModelMenu("ɾ��ѧ����Ϣ");
	printf("������Ҫɾ����ѧ������ţ�");
	scanf("%s",&str);
	for(i=0;i<N;i++)
		if((strcmp(str,stu[i].num))==0)
		{
			print();//
			for(j=i;j<N;j++)
				stu[j]=stu[j+1];
			flag=0;
			printf("ɾ���ɹ���\n");
			StNum--;
		}
		if(flag==1)
		
			printf("û����������\n");
			printf("�Ƿ����ɾ����Y/N��:");
			getchar();
	scanf("%c",&l);
	if(l=='n'||l=='N')
		return;
	else 
	{
		system("cls");
		Del();
	}
		
}


void Sort()
{
	struct student t;
	int i,k,p,x;

	float sum[N],g;
	
	system("cls");
	 SetHint("�������");
	 menu();

	for(i=0;i<N;i++)
		stu[i].score.sum=stu[i].score.Chinese+stu[i].score.Math+stu[i].score.English+stu[i].score.PE;
	for(k=0;k<N-1;k++)
	{
		x=k;
		for(p=x+1;p<N;p++)
		{
			x=p;
			g=sum[k];
			sum[k]=sum[x];
			sum[x]=g;
			t=stu[k];
			stu[k]=stu[x];
			stu[x]=t;
		}
	}

}


void Modi()
{
	int i=0,flag=1;
	char str[20];
	char l;
	system("cls");
	ModelMenu("�޸�ѧ����Ϣ");
	printf("������Ҫ�޸ĵ�ѧ������ţ�");
	scanf("%s",&str);
	for(i=0;i<N;i++)
		if((strcmp(str,stu[i].num))==0)
			break;
	if(i!=N)
	{
		printLine();
		print();
		printLine();
		printf("\n�������޸�����\n");
		printf("���޸�ѧ����ţ�");
		scanf("%s",&stu[i].num);

		printf("���޸�ѧ��������");
		scanf("%s",&stu[i].name);
		printf("���޸�ѧ���Ա�");
		scanf("%s",&stu[i].sex);
		printf("���޸�ѧ�����䣺");
		scanf("%d",&stu[i].age);

		printf("���޸�ѧ�������ĳɼ���");
		scanf("%f",&stu[i].score.Chinese);
		printf("���޸�ѧ������ѧ�ɼ���");
		scanf("%f",&stu[i].score.Math);
		printf("���޸�ѧ����Ӣ��ɼ���");
		scanf("%f",&stu[i].score.English);
		printf("���޸�ѧ���������ɼ���");
		scanf("%f",&stu[i].score.PE);

		stu[i].score.sum=stu[i].score.Chinese+stu[i].score.Math+stu[i].score.English+stu[i].score.PE;

		printf("�޸ĺ��ѧ����ϢΪ��\n");

		printLine();
		print();
		printLine();

	}
	else
		printf("û�����ѧ����\n");
	printf("�Ƿ�������룿��Y/N��:");
	getchar();
	scanf("%c",&l);
	if(l=='n'||l=='N')
		return;
	else if(l=='y'||l=='Y')
	{
		system("cls");
		Modi();
	}

}



void Save()
{
	FILE *fp;
	int i;
	fp=fopen("F:\\C++����\\0Aÿ����ϰ\\StudentScore.txt","w");
	system("cls");
	SetHint("����ɹ�");
	menu();
	fprintf(fp,"���\t����\t\t�Ա�\t����\t����\t��ѧ\tӢ��\t����\t�ܳɼ�\n");
	for(i=N;i>0;i--)
		if(stu[i].age!=0)
			fprintf(fp,"%s\t%s\t\t%s\t%d\t%.lf\t%.lf\t%.lf\t%.lf\t%.lf\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].score.Chinese,stu[i].score.Math,stu[i].score.English,stu[i].score.PE,stu[i].score.sum);
	   fclose(fp);
}



void print()
{
	int i;
	system("cls");
	ModelMenu("��ʾȫ�������Ϣ");
	printf("���\t����\t\t�Ա�\t����\t����\t��ѧ\tӢ��\t����\t�ܳɼ�\n");
	for(i=N;i>0;i--)
		if(stu[i].age!=0)
			printf("%s\t%s\t\t%s\t%d\t%.lf\t%.lf\t%.lf\t%.lf\t%.lf\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].score.Chinese,stu[i].score.Math,stu[i].score.English,stu[i].score.PE,stu[i].score.sum);
	      while(TURE)
		  {
			  char l;
			  printf("�Ƿ񷵻����˵�����Y/N��:");
			  getchar();
			  scanf("%c",&l);
			  if(l=='Y'||l=='y')
				  return;
		  }
}