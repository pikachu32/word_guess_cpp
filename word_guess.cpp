//spanzuratoarea
#include<iostream>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char cuv[20][30], a[100], b, * p, aux[100];
	int i, j = 10, k, c = 0;
	strcpy_s(cuv[1], "neinteligibil");
	strcpy_s(cuv[2], "albastru");
	strcpy_s(cuv[3], "februarie");
	strcpy_s(cuv[4], "oxigen");
	strcpy_s(cuv[5], "sternocleidomastoidian");
	strcpy_s(cuv[6], "damigeana");
	strcpy_s(cuv[7], "cloroform");
	strcpy_s(cuv[8], "treisprezece");
	strcpy_s(cuv[9], "zapada");
	strcpy_s(cuv[10], "alfabetativ");
	strcpy_s(cuv[11], "lichefiabil");
	strcpy_s(cuv[12], "teleenciclopedie");
	strcpy_s(cuv[13], "electrocardiograma");
	strcpy_s(cuv[14], "anticonceptionale");
	strcpy_s(cuv[15], "acid acetilsalicilic");
	strcpy_s(cuv[16], "solidaritate");
	strcpy_s(cuv[17], "curcubitacee");
	strcpy_s(cuv[18], "ciucas");
	strcpy_s(cuv[19], "apendictomie");
	strcpy_s(cuv[20], "bildungsroman");
	cout << "alege un numar de la 1 la 20" << endl;
	cin >> k;
	strcpy_s(a, cuv[k]);
	strcpy_s(aux, a);
	for (i = 0; i < strlen(a); i++)
	{
		if (aux[i] != ' ')
			aux[i] = 'X';
	}
	cout << aux << endl;
	while (j > 0 && c != 1)
	{
		b = _getch();
		system("cls");
		if (strchr(a, b) != 0)
		{
			p = strchr(a, b);
			while (p != 0)
			{
				aux[p - a] = b;
				p = strchr(p + 1, b);
			}
			if (strcmp(a, aux) == 0)
				c = 1;
		}
		else
		{
			j = j - 1;
			cout << "mai ai " << j << " incercari" << endl;
		}
		cout << aux << endl;
	}
	if (j == 0)
		cout << "ai pierdut" << endl << " cuvantul este " << a;
	else
		cout << "ai castigat";
	//getche();
}
