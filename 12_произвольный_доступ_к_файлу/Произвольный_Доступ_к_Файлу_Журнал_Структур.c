#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

typedef struct																						//описываем структуру
{
	
	char surname[30];
	char name[30];
	int age;
	int ball[7];
	float midball;

}STud;

STud st={"\0","\0",0,{0,0,0,0,0,0,0},0.0};															//инициализация пустой структуры

int size;																							//глобальная переменная
FILE *f;																							//глобальное открытие файла
char JR[15]="journal.bin";																			//путь и имя файла

void MenuStud();	
void CountNote();

void CreateJournal();
void PrintNote();
void UpdateNote();
void DeleteNote();
void AddNote();
void PrintAllJournal();

void main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int m=99;
	
		if((f=fopen(JR,"rb"))==NULL) 
			
			{
				printf("*** ФАЙЛ ОТСУТСТВУЕТ ИЛИ НЕ МОЖЕТ БЫТЬ ОТКРЫТ *** \n");
				while(m!=0)
					{
					printf("1. создать файл \n");
					printf("0. выход \n");
					scanf("%d",&m);
					
					fflush(stdin);																	//ОЧИСТКА ПОТОКА, ЧТО-БЫ НЕ ЦИКЛИЛО, ЧИТАЙ ПРО ПОТОКИ
					
					switch(m)
						{
							case 1:
								CreateJournal();
								MenuStud();
								m=0;																//выходим из цикла
								break;
							case 0:
								break;
							default:
								printf("\n !!! ВВЕДЕНО НЕВЕРНОЕ ЗНАЧЕНИЕ !!! \n\n");
						}
					}
			}
		
		else
		
			{
				CountNote();
				MenuStud();
			}
	
	fclose(f);	
	//end MAIN
}

void PrintAllJournal()																				//функция вывода всего журнала
	{
		if((f=fopen(JR,"rb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
			
			int i, j; STud printallst;
			
			printf("---------------ЖУРНАЛ---------------\n");
		
			for(i=0;i<size;i++)
			
				{
					
					fseek(f,sizeof(STud)*i,SEEK_SET);
	
					fread(&printallst,sizeof(STud),1,f);
					
					printf("фамилия: \t %s \n",printallst.surname);
					printf("имя: \t\t %s \n",printallst.name);
					printf("возраст: \t %d \n",printallst.age);
						printf("баллы: \t\t");
						for(j=0;j<7;j++)
						{
							printf("%2d",printallst.ball[j]);
						}
						printf("\n");
					printf("средний балл: \t %.1f \n",printallst.midball);
					printf("\n");
				}
				
				printf("\n");
			}
		
		fclose(f);
	
	}
	
void UpdateNote()																					//функция изменения записи в журнале
	{
		if((f=fopen(JR,"rb+wb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
		
			int n, j; STud upst;
			
			printf("---------------ИЗМЕНЕНИЕ ЗАПИСИ---------------\n");
			printf("введите номер записи \n");
			scanf("%d",&n);
			
			if((0>=n)||(n>size)) {printf("\n !!! выход за пределы журнала !!! \n\n");}
			
			else
				{
				printf("ЗАПОЛНИТЕ ЗНАЧЕНИЯ \n");
				printf("заполните фамилию: \n");
				scanf("%s",&upst.surname);
				printf("заполните имя: \n");
				scanf("%s",&upst.name);
				printf("заполните возраст: \n");
				scanf("%d",&upst.age);
				printf("заполните баллы: \n");
				
					for(j=0;j<7;j++)
					{
						scanf("%d",&upst.ball[j]);
						upst.midball=upst.midball+upst.ball[j];
					}
				
				upst.midball=(float)upst.midball/7;
				
				fseek(f,sizeof(STud)*(n-1),SEEK_SET);
			
				fwrite(&upst,sizeof(STud),1,f);
				
				printf("\n");
				}
			}
		
		fclose(f);
	
	}
	
void PrintNote()																					//функция вывода записи из журнала
	{
		if((f=fopen(JR,"rb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
			
			int n, j; STud printst;
			
			printf("---------------ПРОСМОТ ЗАПИСИ---------------\n");
			printf("введите номер записи \n");
			scanf("%d",&n);
			
			if((0>=n)||(n>size)) {printf("\n !!! выход за пределы журнала !!! \n\n");}
			
			else
				{
				fseek(f,sizeof(STud)*(n-1),SEEK_SET);
		
				fread(&printst,sizeof(STud),1,f);
						
				printf("фамилия: \t %s \n",printst.surname);
				printf("имя: \t\t %s \n",printst.name);
				printf("возраст: \t %d \n",printst.age);
					printf("баллы: \t\t");
						for(j=0;j<7;j++)
						{
							printf("%2d",printst.ball[j]);
						}
					printf("\n");
				printf("средний балл: \t %.1f \n",printst.midball);
				
				printf("\n");
				}
			}
				
		fclose(f);
	
	}	
	
void CreateJournal()																				//функция создания журнала
	{
		if((f=fopen(JR,"wb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
		
			int i;
			
			printf("введите размер журнала \n");
			scanf("%d",&size);
		
				for(i=0;i<size;i++)
					{
						fwrite(&st,sizeof(STud),1,f);
					}
					
			printf("\n");
			
			}
			
		fclose(f);
	
	}
	
void DeleteNote()																					//функция удаления записи в журнале
	{
		if((f=fopen(JR,"rb+wb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
			
			int n, j; STud upst;
			
			printf("---------------УДАЛИТЬ ЗАПИСЬ---------------\n");
			printf("введите номер записи \n");
			scanf("%d",&n);
			
			if((0>=n)||(n>size)) {printf("\n !!! выход за пределы журнала !!! \n\n");}
			
			else
				{
				fseek(f,sizeof(STud)*(n-1),SEEK_SET);
				
				fwrite(&st,sizeof(STud),1,f);
					
				printf("\n");
				}
			
			}
		
		fclose(f);
	
	}
	
void AddNote()																						//функция добавления записи в журнал
	{
		if((f=fopen(JR,"ab"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}					//в режиме rb+ab записывает в начало, так как читает с конца
		
		else
			{
		
			int j; STud addst;
																		
			printf("---------------ДОБАВЛЕНИЕ ЗАПИСИ---------------\n");
			printf("ЗАПОЛНИТЕ ЗНАЧЕНИЯ \n");
			printf("заполните фамилию: \n");
			scanf("%s",&addst.surname);
			printf("заполните имя: \n");
			scanf("%s",&addst.name);
			printf("заполните возраст: \n");
			scanf("%d",&addst.age);
			printf("заполните баллы: \n");
				for(j=0;j<7;j++)
					{
						scanf("%d",&addst.ball[j]);
						addst.midball=addst.midball+addst.ball[j];
					}
			addst.midball=(float)addst.midball/7;
				
			fwrite(&addst,sizeof(STud),1,f);
				
			printf("\n");
				
			size=size+1;
		
			}
		
		fclose(f);
	}
	
void MenuStud()																						//зацикленное меню программмы
	{
		int w=99;
	
		while(w!=0)
		{
			printf("---------------МЕНЮ---------------\n");
			printf("1. изменить запись \n");
			printf("2. удалить запись \n");
			printf("3. вывести запись \n");
			printf("4. вывести весь журнал \n");
			printf("5. добавить запись \n");
			printf("0. выход \n");
			printf("\n");
			scanf("%d",&w);
			
			fflush(stdin);																			//ОЧИСТКА ПОТОКА, ЧТО-БЫ НЕ ЦИКЛИЛО, ЧИТАЙ ПРО ПОТОКИ
			
			switch(w)
			{
				case 1:
					UpdateNote();
					break;
				case 2:
					DeleteNote();
					break;
				case 3:
					PrintNote();
					break;
				case 4:
					PrintAllJournal();
					break;
				case 5:
					AddNote();
					break;
				case 0:
					break;
				default:
					printf("\n !!! ВВЕДЕНО НЕВЕРНОЕ ЗНАЧЕНИЕ !!! \n\n");
			}
		}
	}
	
void CountNote()																					//функция считывания количества записей в журнале
	{
		if((f=fopen(JR,"rb"))==NULL) {printf("### ОШИБКА ОБРАБОТКИ ФАЙЛА ### \n");}
		
		else
			{
			
			STud countst; size=-1;
			
			do
				{
					fread(&countst,sizeof(STud),1,f);
					size++;			
				}
			while(!feof(f));
				
				printf("---------------РАЗМЕР ЖУРНАЛА: %d записей---------------\n",size);
			
			}
				
		fclose(f);
	
	}	

