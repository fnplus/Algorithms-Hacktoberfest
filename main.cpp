#include <iostream>
using namespace std;

void echanger(int tableau[],int a,int b)
{
	int sauv = tableau[a];
	tableau[a] = tableau[b];
	tableau[b] = sauv;
}

int partition(int tableau[], int deb, int fin)
    {
    int compt=deb;
    int pivot=tableau[deb];
    int i;

    for(i=deb+1;i<=fin;i++)
        {
        if(tableau[i]<pivot)
            {
            compt++;
            echanger(tableau,compt,i);
            }
        }
    echanger(tableau,compt,deb);
    return(compt);
    }

void tri_rapide_bis(int tableau[],int debut,int fin)
    {
    if(debut<fin)
        {
        int pivot=partition(tableau,debut,fin);
        tri_rapide_bis(tableau,debut,pivot-1);
        tri_rapide_bis(tableau,pivot+1,fin);
        }
    }

void tri_rapide(int tableau[],int longueur)
     {
     tri_rapide_bis(tableau,0,longueur-1);
     }

int main()
{
  int tab[10] = {10,20,10,35,40,60,12,12,30,32};
  tri_rapide(tab,10);
  for(int i=0;i<10;i++)
  {
    cout << tab[i]<<endl;
  }
  return 0;
}
