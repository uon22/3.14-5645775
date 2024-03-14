#include <time.h>
#include <stdio.h>

int main()
{
	clock_t start, end;
	start = clock(); //측정을 시작한다.
	int result = 0; //결과값은 0으로 지정한다.
	int n = 0; // 변수 n을 생성한다.
	for (int i = 2; i <= 100; i++) //1을 제외하기 위해 2부터 시작한다.
	{
		for (n = 2; n < i; n++)
		{
			if (i % n == 0) break; //조건에 해당하면 for 루프의 실행을 종료한다.
		}
		if (n == i)
			result += n; //result에 n을 더한 후, 결과를 왼쪽의 result에 대입한다.

		end = clock(); //측정을 종료한다.

		printf("[time : %f]\n", (float)(end - start) / CLOCKS_PER_SEC); //결과값을 출력한다.
	}
}