//�������� �ô���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// page 09 ������
int mainpage09()
{
	double a,b,area;
	a=1.2;
	b=3.6;
	area =a*b;
	printf("a=%f,b=%f,area=%f\n",a,b,area);
	 system("pause");//������ͣ���ڵģ���Ҫ����"stdlib"ͷ�ļ�
	return 0;
}

// page 11 ����Բ���
#define PI 3.14159
int mainpage11()
{
	double r,s;
	r=5.0;
	s=PI*r*r;
	printf("s=%f\n",s);
	system("pause");
	return 0;
}

// page 22 �ϻ��Ĵ���
int mainpage2201 ()
{
	float r,s;
	r=5.0;
	s=3.14159*r*r;
	printf("%f\n",s);
	system("pause");
	return 0;
}
int main2202()
{
	float a,b,c,v;
	a=2.0;b=3.0;c=4.0;
	v=a*b*c;
	printf("%f\n",v);
	system("pause");
	return 0;
}

// page 24 ��ʽ���
int mainpage24 ()
{
	int i=2518;
	double a=3.1415;
	printf("i=%d,a=%f,a*10=%e\n",i,a,a*10);
	system("pause");
	return 0;
}

// page 32 ��ͨ���ݽ���
int mainpage32 ()
{
	int x,y,t;
	printf("Enter x & y : \n");
	scanf("%d%d",&x,&y);

	printf("x=%d y=%d\n",x,y);
	t=x;x=y;y=t;
	printf("x=%d y=%d\n",x,y);
	system("pause");
	return 0;
}

// page 33 ������������
 int mainpage33 ()
{
	double x;
	printf("Enter x :\n");
	scanf("%lf",&x); //��Ҫ����"l(L)"����������������
	printf("(1)x=%f\n",x);
	x=x*100;
	x=x+0.5;
	x=(int)x; //����Ҳ����Ҫ������ת��       
	x=x/100;
	printf("(2)x=%f\n",x);
	system("pause");
	return 0;
}

 // page 35 �ϻ��Ĵ���
int  mainpage35()
{
	double a,b,c,s,v;						//double a,b,c,s,v;
	printf("input a,b,c:\n");				//printf(input a,b,c:\n);
	scanf("%lf %lf %lf",&a,&b,&c);			//scanf("%d%d%d",a,b,c); 
	s=a*b;									//s=a*b;
	v=a*b*c;								//v=a*b*c;
	/*   s=(int)s;v=(int)v;   ���п��� */
	printf("a=%f b=%f c=%f \n",a,b,c);		//printf("%d%d%d",a,b, c);
	printf(" s=%f\n v=%f\n",s,v );			//printf("s=%f\n",s,"v=%f",v );	
	system("pause");						
	return 0;
}
// page 36 ʱ��任��
int mainpage36()
{
	int s,m,h;
	printf("input time(second)s:\n");
	scanf("%d",&s);


	//m=s/60;
	//h=m/60;
	//printf("time=%d%d%d\n",h,m,s);

	system("pause");
	return 0;
}

// page 40 �ȽϽṹ
int mainpage40()
{
	int x, y;
	printf("Enter x&y:\n");
	scanf("%d%d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	if (x > y)
	{
		printf("x=%d\n", x);
	}
	if (y > x)
	{
		printf("y=%d\n",y);
	}
	if (x==y)
	{
		printf("x==y %d:\n",x);
	}
	system("pause");
	return 0;
}

// page 41 ��С����
int mainoage41()
{
	int a, b, c, t;
	printf("input a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	if (a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a>c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b>c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d,%d,%d\n",a,b,c);
	system("pause");
	return 0;
}

// page 42 �Ƚ�������
int mainpage4201()
{
	int x, y;
	printf("Enter x&y:\n");
	scanf("%d%d",&x,&y);
	printf("x,y:%d  %d\n",x,y);
	if (x > y)
	{
		printf("the bigger number is x:%d", x);
	}
	else
		printf("the bigger number is y:%d",y);
	system("pause");
	return 0;
}

// page 42 �ж�һ�����ܷ�3����
int mainpage4202()
{
	float  n;
	int s;
	printf("Enter x:\n");
	scanf("%f",&n);
	printf("the number is %f\n",n);
	s = n;
	if (s % 3 == 0)		//�ذ�����ж�n�Ƿ��ܱ�3����
	{
		printf("%f���Ա�3����\n",n);
	}
	else
	{
		printf("%d�����Ա�3����\n",n);
	}
	system("pause");
	return 0;
}

// page 45 ���ֳɼ���
int mainpage45()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	if (goal >= 90)
	{
		printf("A\n");
	}
	if (goal >= 80)
	{
		printf("B\n");
	}
	if (goal >= 70)
	{
		printf("C\n");
	}
	else
	{
		printf("D\n");
	}
	system("pause");
	return 0;
}

// page 47 �����switch���
int mainpage4701()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	switch (goal/ 10)
	{
	case 10:
	case 9:printf("1");
	case 8:printf("2");
	default:printf("3");
	}
	system("pause");
	return 0;
}

// page 47 ������ĳ�������޸�
int mainpage4702()
{
	int goal;
	printf("Enter goal:\n");
	scanf("%d", &goal);
	switch (goal / 10)
	{
	case 10:
	case 9:printf("1");
		break;
	case 8:printf("2"); 
	default:printf("3");
		break;
	}
	system("pause");
	return 0;
}

// page 49 ϰ��4.6 4.7
int mainpage4901()
{
	int w = 4, x = 3, y = 2, z = 1;
	printf("%d\n",(w<x?w:z<y?z:x));//��Ŀ����������ȼ���w<x��ֵ�Ƿ�Ϊ�棬Ȼ���ڱ��ʽ1�ͱ��ʽ2��ѡ����ȷ��һ�����ٽ�����Ŀ����
	system("pause");
	return 0;
}

int mainpage4902()
{
	int a, b, s;
	scanf("%d%d",&a,&b);
	s = a;
	if (a < b)
	{
		s = b;
	}
	s *= s;
	printf("%d\n",s);
	system("pause"); 
	return 0;
}

// page 51 ϰ��4.20
int mainpage51()
{
	int x, y, z;
	x = 0;
	y = 2;
	z = 3;
	switch (x)
	{
	case 0:switch (y==2)//�ж�y�Ƿ����2�����y��ֵ��2���Ǿ�ִ�����
		{
			case 1:printf("$1"); break;//�˴��ǳ���ķ��ʣ��������Ƿ�ǵó�������break��ֹͣ
			case 2:printf("*1"); break;
		}
	case 1:switch (z)//����ִ��case1 ���Ծ�����case2��ִ������
		{
			case 1:printf("$2");
			case 2:printf("*2"); break;
			default:printf("#2");//ִֻ�д˴�
		}
	}
	system("pause");
	return 0;     
}

// page 55 �ۼ�ƽ������n������ƽ���ĺͣ������������󣬴�ӡn�ͺ�,��Ҫ�ǿ���ѭ������ʹ��
int mainpage5501()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (sum < 10000) //���������˴�����������ô�������ڵ�����һ��Ҳ��ִ��
	{
		sum += i * i; //sum�ۼ�i��ƽ��
		i++;
	}
	printf("i=%d \nsum=%d \n",i,sum);
	system("pause");
	return 0;
}

// page 55 �����������е�����
int mainpage5502()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (sum < 10000)
	{
		i++;
		sum += i * i;
	}
	printf("i=%d\nsum=%d\n",i,sum);
	system("pause");
	return 0;
}

// page 55 ��Բ���ʣ������õ���mathͷ�ļ�
int mainpage5503()
{
	int s;
	float n, t, pi;
	t = 1.0;
	pi = 0;
	n = 1.0;
	s = 1;
	while (fabs(t) >= 1e-6)
	{
		pi = pi + t;
		n += 2.0;
		s = -s;
		t = s / n;
	}
	pi = pi * 4;
	printf("pi=%f\n",pi);
	system("pause");
	return 0;
}

// page 56 �������󷽳�x=cosx�ĸ���
int mainpage56()
{
	double x1, x2;
	x1 = 0.0;
	x2 = cos(x1);
	while (fabs(x2 - x1) > 1e-6)
	{
		x1 = x2;
		x2 = cos(x1);
	}
	printf("x=%f\n", x2);
	system("pause");
	return 0;
}

// page 58 ����Fibonacci����,ֱ��ѭ�������д������ķ��������� ��Ҫ����do-while���
//f0=0,f1=1,f2=1,f3=2,f4=3,����,fn=fn-2 + fn-1.
int mainpage58()
{
	int f1, f2, f;
	f1 = 0;
	f2 = 1;
	do
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%d  %d  %d\n", f1, f2, f);
	} while (f2 < 1000);
	
	printf("F=%d\n", f2);
	
	system("pause");
	return 0;
}

// page 59 �ۼ��㷨��1+����+100
int mainpage59()
{
	int i, sum;
	sum = 0;
	for ( i = 0; i <= 100; i++) //����һ��Ҫ<=100
	{
		sum += i;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

// page 60 ����Բ���
int mainpage60()
{
	double r, s, Pi = 3.1416;
	for ( r = 0.5; r <= 2.5; r+=0.5) //+=��������
	{
		s = Pi * r * r; //����Բ���
		printf("r=%3.1f s=%f\n", r, s);
	}
	system("pause");
	return 0;
}

// page 61 ������
int mainpage61()
{
	int k, i, j;
	for ( i = 0; i < 4; i++)
	{
		for ( k = 1; k <= i; k++)
		{
			printf(" "); //û�пո�������룬һ���ո������Ķ��룬�����ո����Ҷ���
		}
		for ( j = 0; j <7-i*2; j++)				//				k�ı仯			j�ı仯
		{										//  i=0			1				0,1,2,3,4,5,6,7
			printf("*");						//  i=1			1,2				0,1,2,3,4,5
		}										//  i=2			1,2,3			0,1,2,3
		printf("\n");							//  i=3			1,2,3,4			0,1
												//  i=4			(��i����4ʱ�˳�ѭ��)
	}											
	system("pause");
	return 0;
}

// page 62  Ѱ������
int mainpage6201()
{
	int k, i, tag;
	for ( i = 2; i<= 100; i++)
	{
		tag = 0;
		for ( k = 2; k < i; k++)
		{
			if (i%k==0)
			{
				tag = 1;
			}
			/*if (tag == 0)
			{
				printf("%d,", i);
			}*/
		}
		if (tag == 0)
		{
			printf("%d,", i);
		}
	}
	system("pause");
	return 0;
}

// page 62 Ѱ�������Ľ���
int mainpage6202()
{
	int k, i, tag;
	printf("2, ");
	for ( i = 3; i <=100; i+=2)
	{
		tag = 0;
		for ( k = 2;tag==0&& k < sqrt(i); k++)
		{
			if (i % k == 0)
			{
				tag = 1;
			}
		}
		if (tag == 0) //���η���ͬ���Ĵ���
		{
			printf("%d, ", i);
		}
	}
	system("pause");
	return 0;
}

// page 63 break��䣬�ۼ�������ĳ����������������������ֵ
int mainpage63()
{
	int i, s;
	s = 0;
	for ( i = 0; ; i++)
	{
		s = s + i;
		if (s>5000)
		{
			break; //��ѭ���ṹ����ֹ����ѭ���壬��ǰ��������ѭ��
		}
	}
	printf("s=%d,i=%d\n", s, i);
	system("pause");
	return 0;
}

// page 64 continue���ִ��ʾ��
int mainpage6401()
{
	int k=0,s=0,i;
	for ( i = 1; i <= 5; i++)
	{
		s = s + i;
		if (s>5)
		{
			printf("* * * * i=%d,s=%d,k=%d\n", i, s, k);
			continue; //��������ѭ����������δִ�е���䣬���̽�����һ��ѭ���������ж�
		}
		k = k + s;
		printf("i=%d,s=%d,k=%d\n", i, s, k);
	}
	system("pause");
	return 0;
}

// page 64 ��Ϥdo-while���
int main()
{
	int x, max;
	printf("Enter -1 to end:\n");
	do
	{
		printf("Enter x :");
		scanf("%d", &x);
	} while (x<0&&x!= -1);
	max = x;
	while (x!= -1)
	{
		printf("Enter x:");
		scanf("%d", &x);
		if (x>0&&x>max)
		{
			max = x;
		}
		if (max != -1)
		{
			printf("max=%d\n", max);
		}
	}
	system("pause");
	return 0;
}




