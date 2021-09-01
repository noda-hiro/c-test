#include<stdio.h>
#include <string>
using namespace std;


/*
2年ゲームプログラマー専攻
野田博昭
*/


/*
*第１問(一問2点)
  以下の計算に2進数で答えよ。
-------------------------------
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111
-------------------------------
*第２問(一問2点)
  第１問の答えを10進数で答えよ
-------------------------------
10000001 = 129
10111111 = 191
-------------------------------
*第３問(一問2点)
  char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
-------------------------------
char   1バイト				  
int    4バイト　				  
float  4バイト
double 8バイト
-------------------------------
*第４問(一問2点)
  char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
-------------------------------
char *	 4バイト
int *	 4バイト
float *	 4バイト
double * 4バイト
-------------------------------
*第５問(20点)
  以下のプログラムを実行した場合、
  ①～③のどの部分が実行されるか答えよ。
int main()
{
	int num = 5;

	num = num % 3;

	if (num == 0)
	{
		①
	}
	else if (num == 2)
	{
		②
	}
	else
	{
		③
	}
}
------------------------
②
------------------------
*/
/*
*第６問(25点)
  数値を2つ入力し、
  1番目に入力された値が奇数なら足し算、
  1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。
*/
int main()
{
	int num1, num2;
	int ans;


	printf("1つ目の値を入力して下さい\n");
	scanf_s("%d", &num1);
	printf("2つ目の値を入力して下さい\n");
	scanf_s("%d", &num2);


	if (num1 % 2 == 0)
	{
		ans = num1 + num2;
		printf_s("%d\n", ans);
	}
	else if (num1 % 2 == 1)
	{
		ans = num1 - num2;
		printf_s("%d\n", ans);
	}

}
/*
*第７問(25点)
  第６問のプログラムをループで行うようにし、
  endと入力された場合終了するようにしてください。
  endの入力は1番目の値の場所でも、2番目の値の場所でも、
  別途endの入力を受け付けるようでもどれでもいいです。
  どこか一か所でendと入力して終了していれば正解とします。
*/
int main()
{
	int num1, num2;
	int ans;
	char end[4] = {};
	int errorCode = -1;
	while (1)
	{
		printf("1つ目の値を入力して下さい\n");
		scanf_s("%d", &num1);
		printf("2つ目の値を入力して下さい\n");
		scanf_s("%d", &num2);
		errorCode = scanf_s("%s", end, 4);

		if (num1 % 2 == 0)
		{
			ans = num1 + num2;
			printf_s("%d\n", ans);
		}
		else if (num1 % 2 == 1)
		{
			ans = num1 - num2;
			printf_s("%d\n", ans);
		}
		if (strcmp(end, "end") == 0)
		{
			break;
		}
	}


}

/*
*第８問(10点)
  以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
  実行できるようにしてください。
  解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
  (途中確認のためにコメントアウトをする分はOKです。)
  間違えている個所は4か所です。
*/
class Point
{
public:
	Point() { Clear(); }

	void	Clear()
	{
		x = 0;
		y = 0;
		z = 0;
	}
public:
	int x, y, z;
};
int main()
{
	Point point;
	Point nextPoint;

	nextPoint.x = 100;
	nextPoint.y = 30;

	while (1)
	{
		if (point.x < nextPoint.x)
		{
			point.x++;
		}
		else if (point.x > nextPoint.x)
		{
			point.x--;
		}

		if (point.y < nextPoint.y)
		{
			point.y++;
		}
		else if (point.y > nextPoint.y)
		{
			point.y--;
		}
		printf("pointX = %d\n", point.x);
		printf("pointY = %d\n", point.y);

		if (point.x == nextPoint.x &&
			point.y == nextPoint.y)
		{
			break;
		}
	}
}
