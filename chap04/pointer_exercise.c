#include <stdio.h>

int main(void)
{
    int i;
    int *pi;

    printf("i�� ũ��: %d\n", sizeof(i));
    printf("pi�� ũ��: %d\n", sizeof(pi));

    //i�� pi�� ���� Ȯ��
    printf("i�� ��: %d\n", i);
    printf("pi�� ��: %d\n", pi);

    // i�� pi�� �ּ� Ȯ��
    printf("i�� �ּ�: %d\n", &i);
    printf("pi�� �ּ�: %d\n", &pi);

    // pi�� ����Ű�� ���� ���� 5�� ����
    *pi = 5;

    return 0;
}
