#include <stdio.h>
#include <string.h>


int main() {
	char a[10001]; //�ڸ��� ���߱⸦ ���� �� �ڸ����� 0 ���� ä��ڿ�
	char b[10001];
	char buf1[10001]; // �Է� ����
	char buf2[10001];

	char result[10003] = " ";// ����� ������ ���ڿ�

	int sum = 0; // ��� ��� �ӽ� ����� ����
	int carry = 0; // �ø��� 
	int t = 0;

	scanf("%s", buf1);
	sprintf(a, "%010000s", buf1); //0ä���

	scanf("%s", buf2);
	sprintf(b, "%010000s", buf2);

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == 32) {
			a[i] = '0';
		}
	}
	for (int i = 0; i < strlen(b); i++) {
		if (b[i] == 32) {
			b[i] = '0';
		}
	}
	for (int i = 9999; i >= 0; i--) {
		sum = (a[i] - '0') + (b[i] - '0') + carry;
		carry = sum / 10;
		sum = sum % 10;
		result[i + 1] = sum + '0';
	}
	result[0] = carry + '0';
	for (t = 0; result[t] == '0'; t++);
	printf("%s", result + t); //0�� �ƴ� i���� ���ں��� ���
	

	return 0;

}