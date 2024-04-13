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
	//파일생성 
	int acc;
	FILE *open;
	open = fopen("data\\acc.txt", "a");
	fprintf(open, "%d", 1);
	fclose(open);
	
	open = fopen("data\\acc.txt", "r");
	fscanf(open, "%d", &acc);
	if(acc == 1)
	{
	printf("실행을 위해 일부 파일을  생성해야 합니다. [동의(1)/ 거부(2)]\n");
	scanf("%d", &abcd);
	if (abcd == 2)
	{
		system("cls");
		printf("실행할 수 없습니다.");
		rmdir("data");
		open = fopen("data\\acc.txt", "w");
		fprintf(open, "%d", 0);
		fclose(open);
		Sleep(1300);
		return 0; 
	}
	else if(abcd == 1)
	{
	printf("기본값을 적용합니다");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	
	open = fopen("data\\ach.txt", "a");
	printf("\n[ach.txt] 파일 생성됨");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\coin.txt", "a");
	printf("\n[coin.txt] 파일 생성됨");
	fprintf(open, "%d", 500);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\cupon.txt", "a");
	printf("\n[cupon.txt] 파일 생성됨");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\passcheck.txt", "a");
	printf("\n[passcheck.txt] 파일 생성됨");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(500);
	
	open = fopen("data\\password.txt", "a");
	printf("\n[password.txt] 파일 생성됨");
	fprintf(open, "%d", 0);
	fclose(open);
	Sleep(1500);
	printf("\n====================================\n");
	printf("실행준비 완료!");
	Sleep(1500); 
	system("cls");
	goto main343;
	}
	
  }
	else 
	{
		goto main343;
	}
	//파일 생성
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
	printf("                                                                                                          가위!\n");
	Sleep(500);
	printf("                                                                                                                  바위!\n");
	Sleep(500);
	printf("                                                                                                                            보!\n\n");
	Sleep(500);
	printf("-------------------------Made by 만듬이----------------------------------\n");
	Sleep(500);
	printf(" 로딩중");
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
	int c;//코인 
	int h;//쿠폰  
	FILE *in, *out, *ini, *outo, *inin, *outout;
	in = fopen("data\\coin.txt", "r");
	ini = fopen("data\\cupon.txt", "r");
	inin = fopen("data\\ach.txt", "r");
	if(in == NULL && ini == NULL && inin == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]를 불러오지 못했습니다.\n");
		printf("\n에러! : [cupon.txt]를 불러오지 못했습니다.\n");
		printf("\n에러! : [ach.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL && ini == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]를 불러오지 못했습니다.\n");
		printf("\n에러! : [cupon.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL && inin == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]를 불러오지 못했습니다.\n");
		printf("\n에러! : [ach.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	if(ini == NULL && inin == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [cupon.txt]를 불러오지 못했습니다.\n");
		printf("\n에러! : [ach.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	if(in == NULL)
	{	
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0; 
	}
	if(ini == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [cupon.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	if(inin == NULL)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [ach.txt]를 불러오지 못했습니다.\n\n");
		system("pause");
		return 0;
	}
	fscanf(in, "%d", &c);
	fscanf(ini, "%d", &h);
	fscanf(inin, "%d", &h1);
	if(c < 0 && h < 0 && h1 < 0)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]의 값이 잘못 되었습니다.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[에러수정..]\n\n");
	    Sleep(1000);
	    printf("\n에러! : [cupon.txt]의 값이 잘못 되었습니다.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[에러수정..]\n\n"); 
	    Sleep(500);
	    printf("\n에러! : [ach.txt]의 값이 잘못 되었습니다.\n");
		h1 = 0; 
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    printf("[에러수정..]\n\n"); 
	    Sleep(500);
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(c < 0 && h < 0)
	{
		printf("로딩실패");
		Sleep(700); 
		system("cls");
		printf("\n에러! : [coin.txt]의 값이 잘못 되었습니다.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[에러수정..]\n\n");
	    Sleep(1000);
	    printf("\n에러! : [cupon.txt]의 값이 잘못 되었습니다.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[에러수정..]\n\n"); 
	    Sleep(1000);
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(c < 0 && h1 < 0)
	{
		printf("로딩실패");
		Sleep(1000); 
		system("cls");
		printf("\n에러! : [coin.txt]의 값이 잘못 되었습니다.\n");
		c = 0; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[에러수정..]\n\n");
	    Sleep(700);
	    printf("\n에러! : [ach.txt]의 값이 잘못 되었습니다.\n");
		h1 = 0; 
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    Sleep(700);
	    printf("[에러수정..]\n\n");
	    system("pause");
	    system("cls");
	    goto main1;
	    return 0;
	}
	if(h < 0 && h1 < 0)
	{
		printf("로딩실패");
	    Sleep(1000);
	    system("cls");
	    printf("\n에러! : [cupon.txt]의 값이 잘못 되었습니다.\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[에러수정..]\n\n"); 
	    Sleep(500);
	    printf("\n에러! : [ach.txt]의 값이 잘못 되었습니다.\n");
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
		printf("로딩실패");
		Sleep(1000); 
		system("cls");
		printf("\n에러! : [coin.txt]의 값이 잘못 되었습니다.\n\n");
		c = 500; 
		out = fopen("data\\coin.txt", "w");
        fprintf(out, "%d", c);
	    fclose(out);
	    printf("[에러수정..]\n\n");
		system("pause");
		system("cls");
		goto main1;
		return 0; 
	}
	if(h < 0)
	{
		printf("로딩실패");
		Sleep(1000); 
		system("cls");
		printf("\n에러! : [cupon.txt]의 값이 잘못 되었습니다.\n\n");
		h = 0;
		outo = fopen("data\\cupon.txt", "w");
        fprintf(outo, "%d", h);
	    fclose(outo);
	    printf("[에러수정..]\n\n"); 
		system("pause");
		system("cls");
		goto main1;
		return 0;
	}
	if(h1 < 0)
	{
		printf("로딩실패");
		Sleep(1000); 
		system("cls");
		printf("\n에러! : [ach.txt]의 값이 잘못 되었습니다.\n\n");
		h1 = 0;
		outout = fopen("data\\ach.txt", "w");
        fprintf(outout, "%d", h1);
	    fclose(outout);
	    printf("[에러수정..]\n\n"); 
		system("pause");
		system("cls");
		goto main1;
		return 0;
	}
	int abcd12 = 0;
	printf("로딩완료!");
	Sleep(1000);
	//로그인부분 
	pass2 = fopen("data\\passcheck.txt", "r");
	fscanf(pass2, "%d", &passcheck);
	fclose(pass2);
	
	if(passcheck == 0)
	{
	system("cls");
	printf("=================R-S-P Game==================\n\n");
	printf("                       [회원가입]                 \n\n\n\n");
	printf("설정하실 비밀번호를 입력해주세요! : ");
	scanf("%d", &p12);
	printf("\n설정하신 비밀번호 : %d\n", p12);
	printf("\n=============================================");
	passcheck = 1;
	pass3 = fopen("data\\passcheck.txt", "w");
	fprintf(pass3, "%d", passcheck);
	fclose(pass3);
	//password 저장부분 
	pass = fopen("data\\password.txt", "w");
	fprintf(pass, "%d", p12);
	fclose(pass);
	}
	
	else if(passcheck == 1)
	{
		system("cls");
		printf("=================R-S-P Game==================\n\n");
		printf("                       [로그인]                 \n\n\n\n");
		printf("비밀번호를 입력하세요! :");
		scanf("%d", &password[0]);
		pass = fopen("data\\password.txt", "r");
		fscanf(pass, "%d", &password[1]);
		fclose(pass);
			if(password[0] == password[1])
			{
				printf("\n로그인에 성공하셨습니다!\n\n");
				printf("\n=============================================");
				Sleep(1000);
				system("cls");
				goto main12;	
			}		
			else
			{
				printf("\n로그인에 실패했습니다!");
				printf("\n=============================================");
				Sleep(1300);
				system("cls");
				goto main1;
			 } 
	}
	//로그인부분 
	Sleep(1300); 
	system("cls");
	main12:
	abcd12 = 0;
	int coinc;
	int d; //상점 변수 
	int e = 0; //도박변수 
	int f;//도박변수2 
	int o;
	int p;
	int n;
	int m;
	int dp;//업적 변수 
	int dp1 = 0; //업적변수 
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
			printf("\n!!![(1)업적 달성! : 코인 1000$이상 모으기] - 쿠폰 2개!!\n\n");
		}
	}
	if(c >= 1000)
	{
		printf("\n!!![(1)업적 달성! : 코인 1000$이상 모으기] - 쿠폰 2개!!\n\n");
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
		printf("코인 데이터를 불러오지 못했습니다");
		Sleep(1000); 
		system("cls");
		fprintf(out, "%d", 500);
		c == 500;
		goto main1;
	}
	printf("\n    [ MAIN MENU ]\n\n가위바위보 게임(1)        [코인 : %d$]\n\n두드려 게임(2)                   [쿠폰 : %d(개)]\n\n상점(3)\n\n업적(4)\n\n재시작(0)\n\n----------------------------------------------------\n[선택하세요!] : ", c, h);
	scanf("%d", &player);
 
	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ 
	 
    //플레이어가  가위  일 때 
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
	 //상점 
	else if(player == 3)
	{
		st:
		system("cls");
		printf("*********************************[상점]************************************\n\n\n");
		printf("                                                             나의 코인 : %d$\n", c); 
		printf("                                                             나의 쿠폰 : %d(개)\n", h); 
		printf("0번(메인) : 메인 화면으로\n\n"); 
		printf("1번(도박) : 33퍼센트 확률 코인 2배 /실패 시 모든 코인을 잃음\n\n");
		printf("2번(쿠폰) : 당첨 확률을 50퍼센트 로 올려주는 쿠폰을 구입합니다 - 15$\n\n");
		printf("---------------------------------------------------------------------------\n\n"); 
		printf("숫자로 입력 : ");
		scanf("%d", &d);
		if(d == 2)
		{
			st1:
			printf("-------------------------------------------------------------------\n");
			printf("구매 수량을 선택해 주세요! : ");
			scanf("%d", &o);
			if(o < 0)
			{
				printf("다시 입력하세요!");
				Sleep(700);
				goto st; 
			}
			p = o * 15;
			if(p < 0)
			{
				printf("다시 입력하세요!");
				Sleep(700);
				goto st; 
			}
			printf("\n총 구입 금액 : %d$", p);
			printf("\n구매 하시겠습니까? yes(1) no(2) : ");
			scanf("%d", &n);
			if(n == 2)
			{
				system("cls");
				printf("\n처음으로 돌아갑니다!");
				Sleep(900);
				goto st;
			}
			if(n == 1)
			{
				if(c < p)
				{
					system("cls");
					printf("\n돈이 부족합니다!");
					Sleep(900);
					goto st;						
				}		
				else if(c >= p)	
				{
					system("cls");
					printf("\n총 쿠폰 %d(개) 를 구매합니다!", o);
					c = c - p;
					out = fopen("data\\coin.txt", "w");
	                fprintf(out, "%d", c);
	                fclose(out);
					h = h + o;
					outo = fopen("data\\cupon.txt", "w");
         	        fprintf(outo, "%d", h);
	                fclose(outo);
					Sleep(950);
					printf("\n구입 완료하였습니다!");
					goto st; 
				}									
			}
			else
			{
				printf("\n다시 입력하세요!\n");
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
				printf("\n돈이 부족하여 도박을 할 수 없습니다!\n\n가위바위보 게임으로 돈을 벌어 오세요!");
				Sleep(2500);
				goto st;	
			}
			system("cls");
			printf("도박을 시작합니다!\n");
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
				printf("확률이 50퍼센트 로 업 됩니다! - 남은 쿠폰 : %d(개)", h);
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
				printf("\n\n당첨되셨습니다!! - 보유한 코인 2배 [%d]", e);
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
				printf("\n\n아쉽지만 탈락! - 보유한 코인 초기화 [%d]", e);
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
		 	printf("\n-------------------\n다시 입력하세요!\n\n-------------------\n");
		 	Sleep(740);
		 	system("cls");
		 	goto st; 
		 }
		

	} 
	else if(player == 4)
	{
		ahc:
		system("cls");
		printf("*********************************[업적]************************************\n\n");
		printf("0번(메인) : 메인 화면으로\n\n"); 
		printf("첫번째 업적 :  코인  1000$ 모을 시 [보상 : 쿠폰 2개]\n");
		printf("----------------------------------------------------------------------------\n");
		printf("돌아가기 (0) : ");
		scanf("%d", &dp);
		if(dp == 0)
		{
			system("cls");
			goto main;
		}
		else
		{
			printf("\n다시 입력하세요!");
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
		printf("\n-------------------\n다시 입력하세요!\n\n-------------------\n");
		Sleep(700);
		system("cls");
		goto main;
		
	}
	abcd12 == 1;
	pain:
		system("cls");
		printf("***************************[두드려 게임]******************************\n\n");
		printf("설명 10번 두드리면 20 코인이 !\n\n\n");
	
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
		printf("***************************[가위 바위 보 게임]******************************\n\n");
		printf("(1)가위 (2)바위 (3)보 (4)나가기         [코인] %d원 \n\n\n", c);
		printf("\n-------------------\n");
		printf("입력 : ");
		scanf("%d", &player1);
	if(player1 == 1 && computer1 == 1)
	{
		printf("\n-------------------\n결과 : 비겼습니다. computer : %d\n\n------------------", computer1);
			Sleep(800);
		    system("cls"); 
		    goto rak;
	}

	 
	else if(player1 == 1 && computer1 == 2)
	{
		printf("\n-------------------\n결과 : 졌습니다. computer : %d\n\n-------------------", computer1);
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
			printf("\n-------------------\n결과 : 이겼습니다. computer : %d\n\n-------------------", computer1);  
			Sleep(800);
		    system("cls");
		    c = c + 30; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 //플레이어가 바위 일 때 
	 else if(player1 == 2 && computer1 == 1)
	{
		printf("\n-------------------\n결과 : 이겼습니다. computer : %d\n\n-------------------", computer1);
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
		printf("\n-------------------\n결과 : 비겼습니다. computer : %d\n\n-------------------", computer1);
					Sleep(800);
		    system("cls");
		    goto rak;
	 }
	 
	else if(player1 == 2 && computer1 == 3)
	{
			printf("\n-------------------\n결과 : 졌습니다. computer : %d\n\n-------------------", computer1);  
						Sleep(800);
		    system("cls");
		    c = c - 10; 
		    out = fopen("data\\coin.txt", "w");
         	fprintf(out, "%d", c);
	        fclose(out);
		    goto rak;
	 }
	 //플레이어가 보 일  때
	 else if(player1 == 3 && computer1 == 1)
	{
		printf("\n-------------------\n결과 : 졌습니다. computer : %d\n\n-------------------", computer1);
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
		printf("\n-------------------\n결과 : 이겼습니다. computer : %d\n\n-------------------", computer1);
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
			printf("\n-------------------\n결과 : 비겼습니다. computer : %d\n\n-------------------", computer1);  
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
		 	printf("\n-------------------\n다시 입력하세요!\n\n-------------------\n");
		 	Sleep(740);
		 	system("cls");
		 	goto rak; 
		 }
	 
	 
	
	return  0;
}

