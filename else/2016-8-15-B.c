#include <stdio.h>

unsigned long long a[1001];
unsigned long long fib(int n) {
	if (n == 1 || n == 2) return 1;
	if (a[n]) return a[n];
	return a[n] = fib(n - 1) + fib(n - 2);
}

unsigned long long b[1001];
unsigned long long get(int n) {
	if (n == 1) return 1;
	if (b[n]) return b[n];
	return b[n] = fib(n) + get(n - 1);
}

// ��ˮ���پ�ˮ���ٰɣ��ҹ�����92���µ�������û����� #(����)
int main(int argc, char* argv[]) {
	int n, fuck;
	while (scanf("%d", &n)) {
//		scanf("%d", &fuck);
		printf("%I64u\n", get(n));
	}
	return 0;
}
