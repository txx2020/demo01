//熟能生巧 敲代码
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//高级语言的特性之一就是通过名字，而不是地址来访问内存的位置，即用名字来代替地址

// page 09 浮点型
int mainpage09()
{
	double a,b,area;
	a=1.2;
	b=3.6;
	area =a*b;
	printf("a=%f,b=%f,area=%f\n",a,b,area);
	system("pause");//用来暂停窗口的，需要调用"stdlib"头文件
	return 0;
}

// page 11 计算圆面积
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

// page 22 上机改错题
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

// page 24 格式输出
int mainpage24 ()
{
	int i=2518;
	double a=3.1415;
	printf("i=%d,a=%f,a*10=%e\n",i,a,a*10);
	system("pause");
	return 0;
}

// page 32 普通数据交换
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

// page 33 数据四舍五入
 int mainpage33 ()
{
	double x;
	printf("Enter x :\n");
	scanf("%lf",&x); //需要加上"l(L)"，否则程序出现乱码
	printf("(1)x=%f\n",x);
	x=x*100;
	x=x+0.5;
	x=(int)x; //这里也很重要，类型转换       
	x=x/100;
	printf("(2)x=%f\n",x);
	system("pause");
	return 0;
}

 // page 35 上机改错题
int  mainpage35()
{
	double a,b,c,s,v;						//double a,b,c,s,v;
	printf("input a,b,c:\n");				//printf(input a,b,c:\n);
	scanf("%lf %lf %lf",&a,&b,&c);			//scanf("%d%d%d",a,b,c); 
	s=a*b;									//s=a*b;
	v=a*b*c;								//v=a*b*c;
	/*   s=(int)s;v=(int)v;   可有可无 */
	printf("a=%f b=%f c=%f \n",a,b,c);		//printf("%d%d%d",a,b, c);
	printf(" s=%f\n v=%f\n",s,v );			//printf("s=%f\n",s,"v=%f",v );	
	system("pause");						
	return 0;
}
// page 36 时间变换题
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

// page 40 比较结构
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

// page 41 大小排序
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

// page 42 比较两个数
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

// page 42 判断一个数能否被3整除
int mainpage4202()
{
	float  n;
	int s;
	printf("Enter x:\n");
	scanf("%f",&n);
	printf("the number is %f\n",n);
	s = n;
	if (s % 3 == 0)		//地板除，判断n是否能被3整除
	{
		printf("%f可以被3整除\n",n);
	}
	else
	{
		printf("%d不可以被3整除\n",n);
	}
	system("pause");
	return 0;
}

// page 45 划分成绩段
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

// page 47 上面的switch语句
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

// page 47 对上面的程序进行修改
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

// page 49 习题4.6 4.7
int mainpage4901()
{
	int w = 4, x = 3, y = 2, z = 1;
	printf("%d\n",(w<x?w:z<y?z:x));//三目运算符，首先计算w<x的值是否为真，然后在表达式1和表达式2中选择正确的一方，再进行三目运算
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

// page 51 习题4.20
int mainpage51()
{
	int x, y, z;
	x = 0;
	y = 2;
	z = 3;
	switch (x)
	{
	case 0:switch (y==2)//判断y是否等于2，如果y的值是2，那就执行语句
		{
			case 1:printf("$1"); break;//此处是程序的伏笔，看读者是否记得程序遇见break就停止
			case 2:printf("*1"); break;
		}
	case 1:switch (z)//程序执行case1 所以就跳过case2的执行条件
		{
			case 1:printf("$2");
			case 2:printf("*2"); break;
			default:printf("#2");//只执行此处
		}
	}
	system("pause");
	return 0;     
}

// page 55 累加平方根，n个数的平方的和，当满足条件后，打印n和和,主要是考察循环语句的使用
int mainpage5501()
{
	int i, sum;
	i = 0;
	sum = 0;
	while (sum < 10000) //如果不满足此处的条件，那么大括号内的运算一次也不执行
	{
		sum += i * i; //sum累加i的平方
		i++;
	}
	printf("i=%d \nsum=%d \n",i,sum);
	system("pause");
	return 0;
}

// page 55 对上面程序进行的修正
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

// page 55 算圆周率，这里用到了math头文件
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

// page 56 迭代法求方程x=cosx的根，
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

// page 58 计算Fibonacci数列,直到循环体中有带条件的非正常出口 主要考察do-while语句
//f0=0,f1=1,f2=1,f3=2,f4=3,……,fn=fn-2 + fn-1.
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
	} while (f2 < 1000);					//执行顺序，先执行do后面的{},然后判断while后面的()，若为1，继续执行do，若为0，跳出循环
	
	printf("F=%d\n", f2);
	
	system("pause");
	return 0;
}

// page 59 累加算法，1+……+100
int mainpage59()
{
	int i, sum;
	sum = 0;
	for ( i = 0; i <= 100; i++) //这里一定要<=100
	{
		sum += i;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}

// page 60 计算圆面积
int mainpage60()
{
	double r, s, Pi = 3.1416;
	for ( r = 0.5; r <= 2.5; r+=0.5) //+=不可忘记
	{
		s = Pi * r * r; //计算圆面积
		printf("r=%3.1f s=%f\n", r, s);
	}
	system("pause");
	return 0;
}

// page 61 倒三角
int mainpage61()
{
	int k, i, j;
	for ( i = 0; i < 4; i++)
	{
		for ( k = 1; k <= i; k++)
		{
			printf(" "); //没有空格是左对齐，一个空格是中心对齐，两个空格是右对齐
		}
		for ( j = 0; j <7-i*2; j++)				//				k的变化			j的变化
		{										//  i=0			1				0,1,2,3,4,5,6,7
			printf("*");						//  i=1			1,2				0,1,2,3,4,5
		}										//  i=2			1,2,3			0,1,2,3
		printf("\n");							//  i=3			1,2,3,4			0,1
												//  i=4			(当i等于4时退出循环)
	}											
	system("pause");
	return 0;
}

// page 62  寻找素数
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

// page 62 寻找素数改进版
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
		if (tag == 0) //两次犯了同样的错误
		{
			printf("%d, ", i);
		}
	}
	system("pause");
	return 0;
}

// page 63 break语句，累加至满足某个条件，算出满足此条件的值
int mainpage63()
{
	int i, s;
	s = 0;
	for ( i = 0; ; i++)
	{
		s = s + i;
		if (s>5000)
		{
			break; //在循环结构中终止本层循环体，提前结束本层循环
		}
	}
	printf("s=%d,i=%d\n", s, i);
	system("pause");
	return 0;
}

// page 64 continue语句执行示例
int mainpage6401()
{
	int k=0,s=0,i;
	for ( i = 1; i <= 5; i++)
	{
		s = s + i;
		if (s>5)
		{
			printf("* * * * i=%d,s=%d,k=%d\n", i, s, k);
			continue; //调过本次循环中余下尚未执行的语句，立刻进行下一次循环的条件判断
		}
		k = k + s;
		printf("i=%d,s=%d,k=%d\n", i, s, k);
	}
	system("pause");
	return 0;
}

// page 64 熟悉do-while语句，从若干个输入的正整数中，选出最大值，用-1结束
int mainpage6402()
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
		scanf("%d",&x);
		if (x>0&& x>max)
		{
			max = x;
		}
	}
	if (max != -1)
	{
		printf("max=%d\n", max);
	}
	system("pause");
	return 0;
}

// page 65 迭代法求数的平方根
int mainpage65()
{
	float a, x0, x1;
	printf("\nInput a:");
	scanf("%f", &a);
	if (a < 0)
	{
		printf("error!\n");
	}
	else
	{
		x0 = a / 2;
		x1 = (x0 + a / x0) / 2;
		do
		{
			x0 = x1;
			x1 = (x0 + a / x0) / 2;
		} while (fabs(x0-x1)>1e-6);
		printf("sqrt(%f)=%f标准sqrt(%f)=%f\n", a, x1, a, sqrt(a));
	}
	system("pause");
	return 0;
}

// page 66 习题计算
int mainpage6601()
{
	int k, j, s;
	for ( k = 2; k < 6; k++,k++) //两个k++就是一次加2,等价于 i+=2
	{
		s = 1;
		for ( j = k; j < 6; j++)
		{
			s += j;
			printf("%d\n", s);
		}
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}

// page 66 习题计算
int mainpgage6602()
{
	int i, j, m = 0;
	for ( i = 1; i <= 15; i+=4)
	{
		for ( j = 3; j <= 19; j+=4)
		{
			m++;
		}
	}
	printf("%d\n", m);
	system("pause");
	return 0;
}

// page 66 习题计算
int mainpage6603()
{
	int n = 10;
	while (n > 7) //当满足()内的条件时，立即执行语句，所以第一次打印的数字是9，与if语句不一样
	{
		n--;
		printf("%d\n", n);
	}
	system("pause");
	return 0;
}
// page 67 习题计算
int mainpage6701()
{
	int x = 3;
	do
	{
		printf("%3d", x -= 2);
	} while (!(--x));
	system("pause");
	return 0;
}

// page 67 习题计算
int mainpage6702()
{
	int i, sum;
	for ( i = 1; i < 6; i++)
	{
		sum += sum;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

// page 67 习题计算
int mainpage6703()
{
	int y = 10;
	for ( ; y > 0; y--)
	{
		if (y%3==0)
		{
			printf("%d\n", --y);
			continue;
		}
	}
	system("pause");
	return 0;
}

// page 67 习题计算
int mainpage6704()
{
	int x;
	for ( x = 0; x < 6; x++)
	{
		printf((x % 2) ? ("**不可以整除%d") : ("##可以整除%d\n"), x); //三目运算符，a?b:c,判断a，执行时，b是假，c是真；
	}
	system("pause");
	return 0;
}

// page 67 习题计算
int mainpage6705()
{
	int i ;
	for ( i = 1; i < 5; i++)
	{
		if (i%2)
		{
			printf("*");
		}
		else
		{
			continue;
		}
		printf("#");
	}
	printf("$\n");
	system("pause");
	return 0;
}

// page 68 习题计算
int main6801()
{
	int x, i;
	for ( i = 1; i < 100; i++)
	{
		x = i;
		if (++x%2==0)
		{
			if (++x%3==0)
			{
				if (++x%7==0)
				{
					printf("%d", x);
				}
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

// page 68 习题计算
int mainpage6802()
{
	int a, b, c, d, i, j, k;
	a = 10;
	b = c = d = 5;
	i = j = k = 0;
	for (;  a>b; ++b)	//	b 5 6 7 8 9 10
	{
		i++;			//	i 1 2 3 4 5 停止
	}
	while (a>++c)		//	c 6 7 8 9 10
	{
		j++;			//	j 1 2 3 4 停止
	}
	do
	{
		k++;			// k 1 2 3 4 5 停止
	} while (a>d++);	// d 6 7 8 9 10
}

// page 68 习题计算
int mainpage6803()
{
	int k, n, m;
	n = 10;
	m = 1;
	k = 1;
	while (k++<=n)
	{
		m *= 2;
	}
	printf("%d\n", m);
	system("pause");
	return 0;
}

// page 69 习题计算
int mainpage6901()
{
	int x = 2;
	while (x--)
	{

	}
	printf("%d\n", x);
	system("pause");
	return 0;
}

// page 69 习题计算
int mainpage6902()
{
	int i = 0, sum = 1;
	do
	{
		sum += i++;
	} while (i<5);
	printf("%d\n", sum);
	system("pause");
	return 0;
}

// page 69 习题计算
int mainpage6903()      //未完成
{
	float x, amax, amin;
	//scanf("%f", &x);
	//while ()
	//{
	//	if (x>amax)
	//	{
	//		amax = x;
	//	}
	//	if (true)
	//	{
	//		amin = x;
	//	}

	//}
	printf("\namax=%f\namin=%f\n", amax, amin);
	system("pause");
	return 0;
}

// page 预留位置


// page 76  输入26个大写字母和ASXII
int mainpage7601()
{
	char ch;
	int i;
	for ( i = 0; i < 26; i++)
	{
		ch = i + 65;
		if (i%2==0)
		{
			printf("\n");
		}
		printf("  c=%c  ASCII= %d", ch, ch);
	}
	putchar('\n');
	system("pause");
	return 0;
}

// page 76 上面程序修改版
int mainpage7602()
{
	char ch;
	int i;
	for ( i = 0; i < 26; i++)
	{
		ch = i + 65;
		if (i%2==0)
		{
			printf("\n");
		}
		printf("  c=%c  ASCII=%d", ch, ch);
	}
	printf("Please Enter to continue\n"); 
	putchar('\n');
}

// page 76 修改版
int mainpage7603()
{
	char c;
	while ((c = getchar()) != '\n')
	{
		if (c>='a'&&c<='z')
		{
			c = c - 'a' + 'A';
		}
		putchar(c);
	}
	putchar('\n');

 }

// page 77 统计字符中的指定输入，此处用到了<ctype.h>头文件
int main7701()
{
	char c;
	c = getchar();
	while (c!='@')
	{
		if (isalpha(c))
		{
			c = tolower(c);
			c = (c - 'a' + 1) % 26 + 'a';
		}
		putchar(c);
		c = getchar();
	}
	printf("\n");
}

//page 77 上面代码修改版
int main() //报错
{
	char c;
	c = getchar;
	while (c != '@')
	{
		if (isalpha(c))
		{
			c = tolower(c);
			c = (c - 'a' + 1) % 26 + 'a';
		}
		putchar(c);
		c = getchar();

	}
	printf("\n");

}