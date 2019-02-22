#include <stdio.h>
#include <string.h>
#define LEN 300

int Input(char n[]);
void Print(char n[]);
void Add(char a[], char b[], char c[]);
void Subtract(char a[], char b[], char c[]);
void Mul(char a[], char b[], char c[]);
void Divide(char a[], char b[], char c[]);

void main()
{
	char BigNumber1[LEN], BigNumber2[LEN], Answer[LEN];
	Input(BigNumber1);
	Input(BigNumber2);
	//Add(BigNumber1, BigNumber2, Answer);
	//Subtract(BigNumber1, BigNumber2, Answer);
	//Mul(BigNumber1, BigNumber2, Answer);
	Divide(BigNumber1, BigNumber2, Answer);
	Print(Answer);
}

int Input(char n[])
{
	char s[LEN];
	int i, LenOfStr;
	for (i = 0; i < LEN; i++)
		n[i] = 0;
	if (scanf("%s", s) < 1)
		return -1; //false
	LenOfStr = strlen(s);
	for (i = 0; i < LenOfStr; i++)
		n[i] = s[LenOfStr - i - 1] - '0';
	return 0; //ture
}

void Print(char n[])
{
	int i;
	for (i = LEN - 1; i > 0; i--)
		if (n[i] != 0)
			break;
	while (i >= 0)
	{
		printf("%d", n[i]);
		i--;
	}
	printf("\n");
}

void Add(char a[], char b[], char c[])
{
	int i;
	for (i = 0; i < LEN; i++)
		c[i] = a[i] + b[i];
	for (i = 0; i < LEN - 1; i++)
	{
		if (c[i] >= 10)
		{
			c[i + 1] += c[i] / 10;
			c[i] = c[i] % 10;
		}
	}
}

void Subtract(char a[], char b[], char c[])
{
	int i;
	char temp[LEN];
	if (strlen(a) < strlen(b))
	{
		strcpy(temp, a);
		strcpy(a, b);
		strcpy(b, temp);
	}
	for (i = 0; i < LEN; i++)
	{
		if (a[i] < b[i])
		{
			a[i + 1] - 1;
			c[i] = a[i] + 10 - b[i];
		}
		else
		{
			c[i] = a[i] - b[i];
		}
	}
}

void Mul(char a[], char b[], char c[])
{
	int i, j;
	for (i = 0; i < LEN; i++)
	{
		for (j = 0; j < LEN; j++)
		{
			c[i + j] = a[j] * b[i];
			if (c[i + j] >= 10)
			{
				c[i + j + 1] += c[i + j] / 10;
				c[i + j] = c[i + j] % 10;
			}
		}
	}
}

void Divide(char a[], char b[], char c[])
{
	int LenOfdiff = strlen(a) - strlen(b);
	int LenOfa = strlen(a);
	int LenOfb = strlen(b);
	char temp[LEN];
	int count = 0;
	int i = LenOfa - 1, j = LenOfb - 1;
	while (j >= 0 && a[LenOfa - 1] >= b[LenfOfb - 1])
	{
		a[i] - b[j];
		i--;
		j--;
	}

	/*
	for (i = LEN - 1; i > 0; i--)
		if (a[i] != 0)
			break;
	while (i >= 0)
	{
		a1[i] = a[i];
		b1[i] = b[i];
		i--;
	}*/
}
