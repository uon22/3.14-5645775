#include <time.h>
#include <stdio.h>

int main()
{
	clock_t start, end;
	start = clock(); //������ �����Ѵ�.
	int result = 0; //������� 0���� �����Ѵ�.
	int n = 0; // ���� n�� �����Ѵ�.
	for (int i = 2; i <= 100; i++) //1�� �����ϱ� ���� 2���� �����Ѵ�.
	{
		for (n = 2; n < i; n++)
		{
			if (i % n == 0) break; //���ǿ� �ش��ϸ� for ������ ������ �����Ѵ�.
		}
		if (n == i)
			result += n; //result�� n�� ���� ��, ����� ������ result�� �����Ѵ�.

		end = clock(); //������ �����Ѵ�.

		printf("[time : %f]\n", (float)(end - start) / CLOCKS_PER_SEC); //������� ����Ѵ�.
	}
}