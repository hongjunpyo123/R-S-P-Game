#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <direct.h>

int main(void)
{
 	mkdir("data");
	go123:
	int abcd = 0;
	abcd = 0;
	//���ϻ��� 
	int acc;
	FILE *open;
	open = fopen("data\\acc.txt", "a");
	fprintf(open, "%d", 1);
	fclose(open);
	
	open = fopen("data\\acc.txt", "r");
	fscanf(open, "%d", &acc);
	if(acc == 1)
	{
	printf("������ ���� �Ϻ� ������  �����ؾ� �մϴ�. [����(1)/ �ź�(2)]\n");
	scanf("%d", &abcd);
	if (abcd == 2)
	{
		system("cls");
		printf("������ �� �����ϴ�.");
		rmdir("data");
		open = fopen("data\\acc.txt", "w");
		fprintf(open, "%d", 0);
		fclose(open);
		Sleep(1300);
		return 0; 
	}
	else if(abcd == 1)
	{
	printf("�⺻���� �����մϴ�");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	
	open = fopen("data\\ach.txt", "a");
	printf("\n[ach.txt] ���� ������");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\coin.txt", "a");
	printf("\n[coin.txt] ���� ������");
	fprintf(open, "%d", 500);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\cupon.txt", "a");
	printf("\n[cupon.txt] ���� ������");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\passcheck.txt", "a");
	printf("\n[passcheck.txt] ���� ������");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\password.txt", "a");
	printf("\n[password.txt] ���� ������");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(1500);
	printf("\n====================================\n");
	printf("�����غ� �Ϸ�!");
	Sleep(1500); 
	system("cls");
	goto main343;
	}
	
  }
	else 
	{
		goto main343;
	}
	//���� ����
	main343: 
	FILE *pass,*pass1,*pass2,*pass3;
	int p12;
	int a;
	int pas;
	int passcheck;
	int password[2]; 
	main1:
	printf("-----------------------------------------------------------\n\n\n\n\n           [R-S-P Game]\n\n" );                
	Sleep(700);
	printf("                                                                                                          ����!\n");
	Sleep(500);
	printf("                                                                                                                  ����!\n");
	Sleep(500);
	printf("                                                                                                                            ��!\n\n");
	Sleep(500);
	printf("-------------------------Made by ������----------------------------------\n");
	Sleep(500);
	printf(" �ε���");
	Sleep(300);
	printf("."); 
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(300);
	printf(".");
	Sleep(700);
	Sleep(600);  
	int h1;
	int c;//���� 
	int h;//����  
	FILE *in, *out, *ini, *outo, *inin, *outout;
	in = fopen("data\\coin.txt", "r");
	ini = fopen("data\\cupon.txt", "r");
	inin = fopen("data\\ach.txt", "r");
	if(in == NULL && ini == NULL && inin == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� �ҷ����� ���߽��ϴ�.\n");
		printf("\n����! : [cupon.txt]�� �ҷ����� ���߽��ϴ�.\n");
		printf("\n����! : [ach.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL && ini == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� �ҷ����� ���߽��ϴ�.\n");
		printf("\n����! : [cupon.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL && inin == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� �ҷ����� ���߽��ϴ�.\n");
		printf("\n����! : [ach.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	if(ini == NULL && inin == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [cupon.txt]�� �ҷ����� ���߽��ϴ�.\n");
		printf("\n����! : [ach.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL)
	{	
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0; 
	}
	if(ini == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [cupon.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	if(inin == NULL)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [ach.txt]�� �ҷ����� ���߽��ϴ�.\n\n");
		system("pause");
		return 0;
	}
	fscanf(in, "%d", &c);
	fscanf(ini, "%d", &h);
	fscanf(inin, "%d", &h1);
	if(c < 0 && h < 0 && h1 < 0)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[��������..]\n\n");
	    Sleep(1000);
	    printf("\n����! : [cupon.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[��������..]\n\n"); 
	    Sleep(500);
	    printf("\n����! : [ach.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h1 = 0; 
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    printf("[��������..]\n\n"); 
	    Sleep(500);
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(c < 0 && h < 0)
	{
		printf("�ε�����");
		Sleep(700); 
		system("cls");
		printf("\n����! : [coin.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[��������..]\n\n");
	    Sleep(1000);
	    printf("\n����! : [cupon.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[��������..]\n\n"); 
	    Sleep(1000);
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(c < 0 && h1 < 0)
	{
		printf("�ε�����");
		Sleep(1000); 
		system("cls");
		printf("\n����! : [coin.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[��������..]\n\n");
	    Sleep(700);
	    printf("\n����! : [ach.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h1 = 0; 
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    Sleep(700);
	    printf("[��������..]\n\n");
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(h < 0 && h1 < 0)
	{
		printf("�ε�����");
	    Sleep(1000);
	    system("cls");
	    printf("\n����! : [cupon.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[��������..]\n\n"); 
	    Sleep(500);
	    printf("\n����! : [ach.txt]�� ���� �߸� �Ǿ����ϴ�.\n");
		h1 = 0; 
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(c < 0)
	{
		printf("�ε�����");
		Sleep(1000); 
		system("cls");
		printf("\n����! : [coin.txt]�� ���� �߸� �Ǿ����ϴ�.\n\n");
		c = 500; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[��������..]\n\n");
		system("pause");
		system("cls");
		goto main1;
		return 0; 
	}
	if(h < 0)
	{
		printf("�ε�����");
		Sleep(1000); 
		system("cls");
		printf("\n����! : [cupon.txt]�� ���� �߸� �Ǿ����ϴ�.\n\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[��������..]\n\n"); 
		system("pause");
		system("cls");
		goto main1;
		return 0;
	}
	if(h1 < 0)
	{
		printf("�ε�����");
		Sleep(1000); 
		system("cls");
		printf("\n����! : [ach.txt]�� ���� �߸� �Ǿ����ϴ�.\n\n");
		h1 = 0;
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    printf("[��������..]\n\n"); 
		system("pause");
		system("cls");
		goto main1;
		return 0;
	}
	int abcd12 = 0;
	printf("�ε��Ϸ�!");
	Sleep(1000);
	//�α��κκ� 
	pass2 = fopen("data\\passcheck.txt", "r");
	fscanf(pass2, "%d", &passcheck);
	fclose(pass2);
	
	if(passcheck == 0)
	{
	system("cls");
	printf("=================R-S-P Game==================\n\n");
	printf("                       [ȸ������]                 \n\n\n\n");
	printf("�����Ͻ� ��й�ȣ�� �Է����ּ���! : ");
	scanf("%d", &p12);
	printf("\n�����Ͻ� ��й�ȣ : %d\n", p12);
	printf("\n=============================================");
	passcheck = 1;
	pass3 = fopen("data\\passcheck.txt", "w");
	fprintf(pass3, "%d", passcheck);
	fclose(pass3);
	//password ����κ� 
	pass = fopen("data\\password.txt", "w");
	fprintf(pass, "%d", p12);
	fclose(pass);
	}
	
	else if(passcheck == 1)
	{
		system("cls");
		printf("=================R-S-P Game==================\n\n");
		printf("                       [�α���]                 \n\n\n\n");
		printf("��й�ȣ�� �Է��ϼ���! :");
		scanf("%d", &password[0]);
		pass = fopen("data\\password.txt", "r");
		fscanf(pass, "%d", &password[1]);
		fclose(pass);
			if(password[0] == password[1])
			{
				printf("\n�α��ο� �����ϼ̽��ϴ�!\n\n");
				printf("\n=============================================");
				Sleep(1000);
				system("cls");
				goto main12;	
			}		
			else
			{
				printf("\n�α��ο� �����߽��ϴ�!");
				printf("\n=============================================");
				Sleep(1300);
				system("cls");
				goto main1;
			 } 
	}
	//�α��κκ� 
	Sleep(1300); 
	system("cls");
	main12:
	abcd12 = 0;
	int coinc;
	int d; //���� ���� 
	int e = 0; //���ں��� 
	int f;//���ں���2 
	int o;
	int p;
	int n;
	int m;
	int dp;//���� ���� 
	int dp1 = 0; //�������� 
	int g = 5;
	main:
	abcd12 == 0;
	srand((unsigned)time(NULL));
	int computer = rand() % 3 + 1 ;
	int player = 0;
	if(c < 1000) 
	{
		if(dp1 == 1)
		{
			printf("\n!!![(1)���� �޼�! : ���� 1000$�̻� ������] - ���� 2��!!\n\n");
		}
	}
	if(c >= 1000)
	{
		printf("\n!!![(1)���� �޼�! : ���� 1000$�̻� ������] - ���� 2��!!\n\n");
		dp1 = 1;
		fclose(inin);
		if(h1 == 0)
		{
				h = h + 2;
				outo = fopen("data\\cupon.txt", "w");
         	    fprintf(outo, "%d", h);
	            fclose(outo);
	            h1 = 1;
	            outout = fopen("data\\ach.txt", "w");
         	    fprintf(outout, "%d", h1);
	            fclose(outout);
		 } 
	}
	out = fopen("data\\coin.txt", "r");
	fscanf(out, "%d", &coinc);
   	if(coinc != c)
	{
		printf("���� �����͸� �ҷ����� ���߽��ϴ�");
		Sleep(1000); 
		system("cls");
		fprintf(out, "%d", 500);
		c == 500;
		goto main1;
	}
	printf("\n    [ MAIN MENU ]\n\n���������� ����(1)        [���� : %d$]\n\n�ε�� ����(2)                   [���� : %d(��)]\n\n����(3)\n\n����(4)\n\n�����(0)\n\n----------------------------------------------------\n[�����ϼ���!] : ", c, h);
	scanf("%d", &player);
 
	//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ� 
	 
    //�÷��̾  ����  �� �� 
	if(player == 1)
	{
		goto rak;
	}
	else if(player == 2)
	{
		goto pain;
	}
	else if(player == 0)
		 {
		 	system("cls");
		 	goto main343;
		  } 
	 //���� 
	else if(player == 3)
	{
		st:
		system("cls");
		printf("*********************************[����]************************************\n\n\n");
		printf("                                                             ���� ���� : %d$\n", c); 
		printf("                                                             ���� ���� : %d(��)\n", h); 
		printf("0��(����) : ���� ȭ������\n\n"); 
		printf("1��(����) : 33�ۼ�Ʈ Ȯ�� ���� 2�� /���� �� ��� ������ ����\n\n");
		printf("2��(����) : ��÷ Ȯ���� 50�ۼ�Ʈ �� �÷��ִ� ������ �����մϴ� - 15$\n\n");
		printf("---------------------------------------------------------------------------\n\n"); 
		printf("���ڷ� �Է� : ");
		scanf("%d", &d);
		if(d == 2)
		{
			st1:
			printf("-------------------------------------------------------------------\n");
			printf("���� ������ ������ �ּ���! : ");
			scanf("%d", &o);
			if(o < 0)
			{
				printf("�ٽ� �Է��ϼ���!");
				Sleep(700);
				goto st; 
			}
			p = o * 15;
			if(p < 0)
			{
				printf("�ٽ� �Է��ϼ���!");
				Sleep(700);
				goto st; 
			}
			printf("\n�� ���� �ݾ� : %d$", p);
			printf("\n���� �Ͻðڽ��ϱ�? yes(1) no(2) : ");
			scanf("%d", &n);
			if(n == 2)
			{
				system("cls");
				printf("\nó������ ���ư��ϴ�!");
				Sleep(900);
				goto st;
			}
			if(n == 1)
			{
				if(c < p)
				{
					system("cls");
					printf("\n���� �����մϴ�!");
					Sleep(900);
					goto st;						
				}		
				else if(c >= p)	
				{
					system("cls");
					printf("\n�� ���� %d(��) �� �����մϴ�!", o);
					c = c - p;
					out = fopen("data\\coin.txt", "w");
	                fprintf(out, "%d", c);
	                fclose(out);
					h = h + o;
					outo = fopen("data\\cupon.txt", "w");
         	        fprintf(outo, "%d", h);
	                fclose(outo);
					Sleep(950);
					printf("\n���� �Ϸ��Ͽ����ϴ�!");
					goto st; 
				}									
			}
			else
			{
				printf("\n�ٽ� �Է��ϼ���!\n");
				Sleep(1300);
				system("cls");
				goto st;
			}
			 
			
		 } 
		else if(d == 1)
		{
			if(c == 0)
			{
				system("cls");
				printf("\n���� �����Ͽ� ������ �� �� �����ϴ�!\n\n���������� �������� ���� ���� ������!");
				Sleep(2500);
				goto st;	
			}
			system("cls");
			printf("������ �����մϴ�!\n");
			if(h <= 0)
			{
				h = 0;
				g = 5;
			}
			else if(h > 0)
			{
				h = h - 1;
				outo = fopen("data\\cupon.txt", "w");
         	    fprintf(outo, "%d", h);
	            fclose(outo);
				g = 3;
				Sleep(1100); 
				printf("Ȯ���� 50�ۼ�Ʈ �� �� �˴ϴ�! - ���� ���� : %d(��)", h);
			}
			f = c;
			c = 0;
			out = fopen("data\\coin.txt", "w");
	        fprintf(out, "%d", c);
	        fclose(out);
			e = rand() % g + 1;
			Sleep(1500);
			
			if(e == 1 || e == 2)
			{
				printf("\n\n��÷�Ǽ̽��ϴ�!! - ������ ���� 2�� [%d]", e);
				c = 2 * f;
				out = fopen("data\\coin.txt", "w");
	            fprintf(out, "%d", c);
	            fclose(out);
				Sleep(1500); 
				system("cls"); 
				goto st;
			}
			else
			{
				printf("\n\n�ƽ����� Ż��! - ������ ���� �ʱ�ȭ [%d]", e);
				Sleep(1500);
				system("cls");
				goto st; 
			}
			 
		 } 
		 else if(d == 0)
		 {
		 	system("cls");
		 	goto main;
		 }
		
		 else
		 {
		 	printf("\n-------------------\n�ٽ� �Է��ϼ���!\n\n-------------------\n");
		 	Sleep(740);
		 	system("cls");
		 	goto st; 
		 }
		

	} 
	else if(player == 4)
	{
		ahc:
		system("cls");
		printf("*********************************[����]************************************\n\n");
		printf("0��(����) : ���� ȭ������\n\n"); 
		printf("ù��° ���� :  ����  1000$ ���� �� [���� : ���� 2��]\n");
		printf("----------------------------------------------------------------------------\n");
		printf("���ư��� (0) : ");
		scanf("%d", &dp);
		if(dp == 0)
		{
			system("cls");
			goto main;
		}
		else
		{
			printf("\n�ٽ� �Է��ϼ���!");
			Sleep(700);
			goto ahc; 
		}
	
		  
	}
	else if(player == 4)
	{
		system("cls");
		Sleep(950);
		goto main1;
	 } 
	else 
	{
		printf("\n-------------------\n�ٽ� �Է��ϼ���!\n\n-------------------\n");
		Sleep(700);
		system("cls");
		goto main;
		
	}
	abcd12 == 1;
	pain:
		system("cls");
		printf("***************************[�ε�� ����]******************************\n\n");
		printf("���� 10�� �ε帮�� 20 ������ !\n\n\n");
	
	 	if(abcd12 >= 0 && abcd12 <= 10)
	 	{
		 
		system("pause");
		printf("\n-------------------\n");
		c = c + 2;
		    out = fopen("data\\coin.txt", "w");
	        fprintf(out, "%d", c);
	        fclose(out);
	    printf("coin +2\n");
	    Sleep(100);
	    abcd12 = abcd12 + 1;
	    goto pain;
	}
		
		abcd12 == 0;
		system("cls");
		goto main12;
	rak:
		system("cls");
		int player1 = 0;
		int computer1 = rand() % 3 + 1 ;
		printf("***************************[���� ���� �� ����]******************************\n\n");
		printf("(1)���� (2)���� (3)�� (4)������         [����] %d�� \n\n\n", c);
		printf("\n-------------------\n");
		printf("�Է� : ");
		scanf("%d", &player1);
	if(player1 == 1 && computer1 == 1)
	{
		printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n------------------", computer1);
			Sleep(800);
		    system("cls"); 
		    goto rak;
	}

	 
	else if(player1 == 1 && computer1 == 2)
	{
		printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n-------------------", computer1);
			Sleep(800);
		    system("cls");
		    c = c - 10; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 
	else if(player1 == 1 && computer1 == 3)
	{
			printf("\n-------------------\n��� : �̰���ϴ�. computer : %d\n\n-------------------", computer1);  
			Sleep(800);
		    system("cls");
		    c = c + 30; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 //�÷��̾ ���� �� �� 
	 else if(player1 == 2 && computer1 == 1)
	{
		printf("\n-------------------\n��� : �̰���ϴ�. computer : %d\n\n-------------------", computer1);
					Sleep(800);
		    system("cls");
		    c = c + 30;
			out = fopen("data\\coin.txt", "w");
	        fprintf(out, "%d", c);
	        fclose(out); 
		    goto rak;
	}
	 
	else if(player1 == 2 && computer1 == 2)
	{
		printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n-------------------", computer1);
					Sleep(800);
		    system("cls");
		    goto rak;
	 }
	 
	else if(player1 == 2 && computer1 == 3)
	{
			printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n-------------------", computer1);  
						Sleep(800);
		    system("cls");
		    c = c - 10; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 //�÷��̾ �� ��  ��
	 else if(player1 == 3 && computer1 == 1)
	{
		printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n-------------------", computer1);
					Sleep(800);
		    system("cls");
		    c = c - 10; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	}
	 
	else if(player1 == 3 && computer1 == 2)
	{
		printf("\n-------------------\n��� : �̰���ϴ�. computer : %d\n\n-------------------", computer1);
					Sleep(800);
		    system("cls");
		    c = c + 30;
		    out = fopen("data\\coin.txt", "w");
	        fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 
	else if(player1 == 3 && computer1 == 3)
	{
			printf("\n-------------------\n��� : �����ϴ�. computer : %d\n\n-------------------", computer1);  
			Sleep(800);
		    system("cls");
		    goto rak;
	 } 
	 else if(player1 == 4)
		{
			system("cls");
			goto main;
		 } 
   	else
		 {
		 	printf("\n-------------------\n�ٽ� �Է��ϼ���!\n\n-------------------\n");
		 	Sleep(740);
		 	system("cls");
		 	goto rak; 
		 }
	 
	 
	
	return  0;
}

