#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<time.h>

int main()
{

  int i;
  long fin=4294967295;// lensemble des nombres non signes cad positif
  int NbrDeBille;
  int NbDeeRe;
  char Joueur1[20];
   char Joueur2[20];
    bool tour;//cest pour savoir quel joueur va jouer
      //Presentation du jeu
   printf("On comence avec un tas de bille, le jeu se joue a deux\n");
   printf("Les joueurs jouent l'un apres l'autre\n");
   printf("Chaque joueur a son tour peut retirer une ,deux ou trois billes du tas\n");
   printf("Le joueur qui prend la derniere bille a perdu\n");

     printf("Donner le nom du premier joueur\n");
      scanf("%s",Joueur1);
         printf("Donner le nom du deuxieme joueur\n");
        scanf("%s",Joueur2);
      printf("Donner le nombre de bille de depart\n");
      scanf("%d",&NbrDeBille);
      if(NbrDeBille <= 0 )
      {
        NbrDeBille=rand()%(30 + 10);//Permet de generer un nombre aleaoir compris entre 10 et 30
        printf("On a pris un nombre aleatoire:%d\n",NbrDeBille);
       }
        tour=false;// si c'est le joueur2 qui joue

         //system("clear");//pour effacer l'ecran
          for(i=0;i<fin;i++)
           {
            tour=!tour; //on change de joueur cad tour=true
             printf("C'est au tour de ");
              if(tour==true)
               printf("%s\n",Joueur1);
                 else
                  {
                  printf("%s\n",Joueur2);
                  }
                   printf("il reste %d billes\n",NbrDeBille);
                       if(NbrDeBille<=30)
                        {
                        for(i=0;i<NbrDeBille;i++)
                          puts(".");
                         }
                              printf("Donner le nombre de de bille a retirer\n");
                              scanf("%d",&NbDeeRe);
                                while((NbDeeRe < 1)|| (NbDeeRe >3)||(NbDeeRe > NbrDeBille))
                                 {
                                   printf("Tricheur");
                                   printf("On peut retirer qu'entre 1 et 3 billes\n");
                                     printf("Donner le nombre de de bille a retirer\n");
                                     scanf("%d",&NbDeeRe);
                                  }
               NbrDeBille=NbrDeBille-NbDeeRe;
                 if( NbrDeBille==0)//condition pour quitter la boucle
                  break;
             }

          if(tour==false)
            printf("%s a gangne ",Joueur1);
             else
               printf("%s a gangne ",Joueur2);


    return 0;
}
