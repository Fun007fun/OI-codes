/*
 * ˵ʵ��������ʲô��˼�Ҷ���֪��
 * �������һ���Ϊ��get��������˼
 * д���ύ�˼��Σ�ȫ��RE
 * ���ڲ�֪����
 * ��ȷ�𰸣�
 *  */
#include<stdio.h>
int main() {
	int p,e,i,d,j;
	scanf("%d%d%d%d",&p,&e,&i,&d);
	for(j=d+1;j<=21252;j++)
		if((j-p)%23==0) break;
	for(;j<=21252;j=j+23)
		if((j-e)%28==0) break;
	for(;j<=21252;j=j+23*28)
		 if((j-i)%33==0) break;
	printf("%i",j-d);
	 return 0;
}


/*
 * �ҵĴ��룺
#include <stdio.h>

int* min(int* a, int* b){
	return *a > *b ? b : a;
}

int* max(int* a, int* b){
	return *a < *b ? b : a;
}

int get( int p, int e, int i){
	int t = 0;
	int ___ = e * p;
	do{
		t = *max(&p, &e) % *min(&p, &e);
		*max(&p, &e) = t;
	}while(t);
	e = ___ / *max(&p, &e);
	___ = e * i;
	do{
		t = *max(&i, &e) % *min(&i, &e);
		*max(&i, &e) = t;
	}while(t);
	e = ___ / *max(&i, &e);
	return e;
}

int main(int argc, char** argv){
	int m;
	int p;
	int e;
	int i;
	int s;

	scanf("%i %i %i %i", &p, &e, &i, &m);
	s = get(p, e, i);
	while(m > 0){
		m -= s;
	}
	printf("%i", -m);
	return 0;
}
 */
