#include <stdio.h>
int main()
{
	char *shop[3][4] = {
		{"1. �ڵ�����","2. �ڹ�Ŀ��","3. �ڹ��꽺","4. ��Ÿ��C����Ŭ��"},
		{"5. �޸�Ĩ","6. ��Ĩ","7. CĨ","8. �ڹ�Ĩ"},
		{"9. ��Ÿ��","10. ���ڹ���","11. ��¡���","12. ������"}
	};
	int num;
	printf("C��� u");
	printf("����:�������. c��� u�Դϴ�. ��� ��ǰ�� �����Ͻðڽ��ϱ�?");
	printf("1~12");

	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		for (int j = 0; j < 4; j++)
		{
			printf("%-12s",shop[i][j]);
		}
	}
	printf("\n");
	scanf_s("%d", &num);
	switch (num)
	{
	case 1: {
		printf("����: �����Ͻ� ��ǰ�� �ڵ������Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 2: {
		printf("����: �����Ͻ� ��ǰ�� �ڹ�Ŀ���Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 3: {
		printf("����: �����Ͻ� ��ǰ�� �ڹ��꽺 �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 4: {
		printf("����: �����Ͻ� ��ǰ�� ��Ÿ��C����Ŭ�� �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 5: {
		printf("����: �����Ͻ� ��ǰ�� �޸�Ĩ �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 6: {
		printf("����: �����Ͻ� ��ǰ�� ��Ĩ �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 7: {
		printf("����: �����Ͻ� ��ǰ�� CĨ �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 8: {
		printf("����: �����Ͻ� ��ǰ�� �ڹ�Ĩ �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 9: {
		printf("����: �����Ͻ� ��ǰ�� ��Ÿ�� �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 10: {
		printf("����: �����Ͻ� ��ǰ�� ���ڹ��� �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 11: {
		printf("����: �����Ͻ� ��ǰ�� ��¡��� �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}

	case 12: {
		printf("����: �����Ͻ� ��ǰ�� ������ �Դϴ�.\n�̿��� �ּż� �����մϴ�.");
		break;
	}
	default:
		printf("����:����.");
		break;
	}
	return 0;
}	