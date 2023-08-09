#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,T[10],N,val,pos;
printf("Dimension N du tableau \n ");
scanf("%d", &N );
for (i=0; i<N; i++) // Pour remplir le tableau
{
printf("Element %d : ", i+1);
scanf("%d", &T[i]);
}
printf("Element a inserer : ");
scanf("%d", &val ); // Lire la valeur que nous voudrions insérer dans le tableau
printf("Entrer la position :");
scanf("%d",&pos);
printf("le contenu du tableau avant modification : \n");
for (i=0; i<N; i++)
printf("%d ", T[i]);
printf("\n");
if (pos<=0 || pos>N+1)
printf(" position invalide");
else
{
for(i=N;i>=pos;i--) // Attention ici quand je dis pos=2 la position 2 ça veut dire le rang
T[i]= T[i-1];
}
T[pos-1]=val; // pour inserer la valeur dans la position desirée
N++; // on incremente N par 1 car la dimension est devenue N+1 apres insertion de la
printf("\n le Tableau apres insertion de la valeur %d dans la position %d \n",val,pos);
for (i=0; i<N; i++)
printf("%d \t ", T[i]);
return 0;
}
