#include <stdio.h>
#include <string.h>


int main() {
	char a[10001]; //자리수 맞추기를 위해 앞 자리수를 0 으로 채운문자열
	char b[10001];
	char buf1[10001]; // 입력 버퍼
	char buf2[10001];

	char result[10003] = " ";// 결과를 저장할 문자열

	int sum = 0; // 계산 결과 임시 저장용 변수
	int carry = 0; // 올림수 
	int t = 0;

	scanf("%s", buf1);
	sprintf(a, "%010000s", buf1); //0채우기

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
	printf("%s", result + t); //0이 아닌 i번쨰 문자부터 출력
	

	return 0;

}