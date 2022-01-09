#include "Structures.h"
#include "include.h"


t_carteChance*creer()
{
    t_carteChance*pile;
    int nombreMarques, perte, somme, gain, solde, cagnotte, nombreJoueurs, verseBanque, verseJoueurs;
    int de1Joueur1, de2Joueur1, de1Joueur2, de2Joueur2, de1Joueur3, de2Joueur3, de1Joueur4, de2Joueur4;
    int score1, score2, score3, score4, somme1, somme2, somme3, somme4, solde1, solde2, solde3, solde4;
    pile = (t_carteChance**)malloc(1*sizeof(t_carteChance*));

    if(pile!=NULL)
    {
        printf("Saisir le numero de la carte : \n");
        scanf("%d", &pile->numeroCarte);
        printf("\n");
        if((pile->numeroCarte)==1)
        {
            printf("TAXE DES MARQUES : si tu possedes 3 marques ou plus, payes 200$ a la banque !\n");
            perte = 200;
            printf("Saisis le nombre de marques que tu possedes : \n");
            scanf("%d", &nombreMarques);

            if(nombreMarques>=3)
            {
                printf("Payes %d$ a la banque !\n", perte);
                perte = 200;
                printf("Saisis la somme d'argent que tu as : \n");
                scanf("%d\n", &somme);
                solde = somme-perte;
                printf("Ta solde est maintenant de : %d$\n", solde);
            }
            else
            {
                printf("Tout va bien pour toi, tu n'as rien a faire !\n");
            }
        }
        if((pile->numeroCarte)==2)
        {
            printf("Concours gagnant !! Votre participation a un concours organise par Nike a porte ses fruits ! Recevez 300$\n");
            gain = 300;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme + gain;
            printf("Votre solde est maintenant de : %d$\n", solde);

        }
        if((pile->numeroCarte)==3)
        {
            printf("Vous avez ete arrete pour fraude fiscale !! Allez en PRISON !\n");
            printf("Allez directement en prison, ne passez pas par la case Depart et ne recevez pas 200$\n");
        }
        if((pile->numeroCarte)==4)
        {
            printf("Adidas organise un concours pour gagner une paire de yeezy !\n");
            printf("Pour participer, chaque joueur verse 100$ dans la cagnotte et la banque verse 200$\n");
            printf("Le joueur qui fait le plus gros score aux des remporte l'argent de la cagnotte !\n");
            verseBanque = 200;
            verseJoueurs = 100;
            printf("Saisissez le nombre de participants : \n");
            scanf("%d", &nombreJoueurs);
            cagnotte = verseBanque+(verseJoueurs*nombreJoueurs);
            if(nombreJoueurs==1)
            {

                printf("Saisissez votre somme d'argent : \n");
                scanf("%d", &somme);
                printf("Versez votre participation dans la cagnotte\n");
                solde = somme-verseJoueurs;
                printf("Votre solde est de : %d$\n", solde);

                solde = solde+cagnotte;
                printf("Votre solde est maintenant de : %d$\n", solde);
            }
            if(nombreJoueurs==2)
            {
                printf("Joueur 1, saisissez votre somme : \n");
                scanf("%d", &somme1);
                printf("Joueur 2, saisissez votre somme : \n");
                scanf("%d", &somme2);
                printf("Chaque joueur verse sa participation\n");
                solde1 = somme1-verseJoueurs;
                solde2 = somme2-verseJoueurs;

                srand(time(NULL));
                printf("Le premier joueur lance les des : \n");
                de1Joueur1=rand()%(6-1)+1;
                de2Joueur1=rand()%(6-1)+1;
                printf("|%d|     |%d|\n", de1Joueur1, de2Joueur1);
                score1 = de1Joueur1+de2Joueur1;
                printf("Votre score est : %d\n", score1);

                printf("Le deuxieme joueur lance les des : \n");
                de1Joueur2=rand()%(6-1)+1;
                de2Joueur2=rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur2, de2Joueur2);
                score2=de1Joueur2+de2Joueur2;
                printf("Votre score est : %d\n", score2);
                if(score1<score2)
                {
                    printf("Joueur 2 a gagne !!!\n");
                    solde2 = solde2+cagnotte;
                    printf("Votre solde est maintenant de : %d$\n", solde2);
                }
                else if(score1>score2)
                {
                    printf("Joueur 1 a gagne !!!\n");
                    solde1 = solde1+cagnotte;
                    printf("Votre solde est maintenant de : %d$\n", solde1);
                }
            }
            if(nombreJoueurs==3)
            {
                printf("Joueur 1, saisissez votre somme : \n");
                scanf("%d", &somme1);
                printf("Joueur 2, saisissez votre somme : \n");
                scanf("%d", &somme2);
                printf("Joueur 3, saisissez votre somme : \n");
                scanf("%d", &somme3);
                printf("Chaque joueur verse sa participation\n");
                solde1 = somme1-verseJoueurs;
                solde2 = somme2-verseJoueurs;
                solde3 = somme3-verseJoueurs;

                srand(time(NULL));

                printf("Le premier joueur lance les des : \n");
                de1Joueur1=rand()%(6-1)+1;
                de2Joueur1=rand()%(6-1)+1;
                printf("|%d|     |%d|\n", de1Joueur1, de2Joueur1);
                score1 = de1Joueur1+de2Joueur1;
                printf("Votre score est : %d\n", score1);

                printf("Le deuxieme joueur lance les des : \n");
                de1Joueur2=rand()%(6-1)+1;
                de2Joueur2=rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur2, de2Joueur2);
                score2=de1Joueur2+de2Joueur2;
                printf("Votre score est : %d\n", score2);

                printf("Le troisieme joueur lance les des : \n");
                de1Joueur3=rand()%(6-1)+1;
                de2Joueur3=rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur3, de2Joueur3);
                score3=de1Joueur3+de2Joueur3;
                printf("Votre score est : %d\n", score3);

                if((score1>score2) && (score1>score3))
                {
                    printf("Joueur 1 a gagne !!!\n");
                    solde1 = solde1+cagnotte;
                    printf("Joueur 1, votre solde est maintenant de : %d$\n", solde1);
                }
                if((score2>score1) &&(score2>score3))
                {
                    printf("Joueur 2 a gagne !!!\n");
                    solde2 = solde2+cagnotte;
                    printf("Joueur 2, votre solde est maintenant de : %d$\n", solde2);
                }
                if((score3>score1) &&(score3>score2))
                {
                    printf("Joueur 3 a gagne !!!\n");
                    solde3 = solde3+cagnotte;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);
                }
            }
            if(nombreJoueurs==4)
            {
                printf("Joueur 1, saisissez votre somme : \n");
                scanf("%d", &somme1);
                printf("Joueur 2, saisissez votre somme : \n");
                scanf("%d", &somme2);
                printf("Joueur 3, saisissez votre somme : \n");
                scanf("%d", &somme3);
                printf("Joueur 4, saisissez votre somme : \n");
                scanf("%d", &somme4);
                printf("Chaque joueur verse sa participation\n");
                solde1 = somme1-verseJoueurs;
                solde2 = somme2-verseJoueurs;
                solde3 = somme3-verseJoueurs;
                solde4 = somme4-verseJoueurs;

                srand(time(NULL));

                printf("Joueur 1, lancez les des : \n");
                de1Joueur1=rand()%(6-1)+1;
                de2Joueur1=rand()%(6-1)+1;
                printf("|%d|     |%d|\n", de1Joueur1, de2Joueur1);
                score1 = de1Joueur1+de2Joueur1;
                printf("Votre score est : %d\n", score1);

                printf("Joueur 2, lancez les des : \n");
                de1Joueur2=rand()%(6-1)+1;
                de2Joueur2=rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur2, de2Joueur2);
                score2=de1Joueur2+de2Joueur2;
                printf("Votre score est : %d\n", score2);

                printf("Joueur3, lancez les des : \n");
                de1Joueur3=rand()%(6-1)+1;
                de2Joueur3=rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur3, de2Joueur3);
                score3=de1Joueur3+de2Joueur3;
                printf("Votre score est : %d\n", score3);

                printf("Joueur 4, lancez les des : \n");
                de1Joueur4 = rand()%(6-1)+1;
                de2Joueur4 = rand()%(6-1)+1;
                printf("|%d|      |%d|\n", de1Joueur4, de2Joueur4);
                score4=de1Joueur4+de2Joueur4;
                printf("Votre score est : %d\n", score4);

                if((score1>score2) && (score1>score3) && (score1>score4))
                {
                    printf("Joueur 1 a gagne !!!\n");
                    solde1 = solde1+cagnotte;
                    printf("Joueur 1, votre solde est maintenant de : %d$\n", solde1);
                }
                if((score2>score1) &&(score2>score3) && (score2>score4))
                {
                    printf("Joueur 2 a gagne !!!\n");
                    solde2 = solde2+cagnotte;
                    printf("Joueur 2, votre solde est maintenant de : %d$\n", solde2);
                }
                if((score3>score1) &&(score3>score2) && (score3>score4))
                {
                    printf("Joueur 3 a gagne !!!\n");
                    solde3 = solde3+cagnotte;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);
                }
                if((score4>score1) &&(score4>score2) && (score4>score3))
                {
                    printf("Joueur 4 a gagne !!!\n");
                    solde4 = solde4+cagnotte;
                    printf("Joueur 4, votre solde est maintenant de : %d$\n", solde4);
                }
            }
        }
        if ((pile->numeroCarte)==5)
        {
            printf("Votre nouvelle voiture bombarde !!!\n");
            printf("Avancez de 5 cases supplementaires\n");
        }
        if ((pile->numeroCarte)==6)
        {
            printf("Les actions chutent !!\n");
            printf("Vous perdez 50$ par marque possedee\n");
            printf("Saisissez le nombre de marques que vous possedez : \n");
            scanf("%d", &nombreMarques);

            if(nombreMarques==0)
            {
                printf("Vous etes tranquille, vous n'avez rien a payer !\n");
            }

            if(nombreMarques==1)
            {
                perte = 50;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==2)
            {
                perte = 100;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==3)
            {
                perte = 150;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==4)
            {
                perte = 200;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==5)
            {
                perte = 250;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==6)
            {
                perte = 300;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==7)
            {
                perte = 350;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==8)
            {
                perte = 400;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==9)
            {
                perte = 450;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(nombreMarques==10)
            {
                perte = 500;
                printf("Versez %d$ a la banque\n", perte);
                printf("Saisissez votre somme : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous ne pouvez pas payer car vous devez plus d'argent que ce que vous avez\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }

            }


        }
        if ((pile->numeroCarte)==7)
        {
            printf("Vous avez ete selectionne pour tester un nouveau produit avant son lancement !!\n");
            printf("Recevez 150$\n");
            gain = 150;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme+gain;
            printf("Votre solde est maintenant de : %d$\n", solde);
        }
        if ((pile->numeroCarte)==8)
        {
            printf("Oh non !! Votre nouvelle voiture a ete volee !!\n");
            printf("Divisez par 2 le prochain score obtenu aux des s'il est pair\n");
            printf("Retirez 2 au prochain score obtenu aux des s'il est impair\n");
        }
        if ((pile->numeroCarte)==9)
        {
            printf("Vous etes libere de prison\n");
            printf("Cette carte peut etre conservee, vendue ou echangee a un autre joueur\n");
        }
        if((pile->numeroCarte)==10)
        {
            printf("Votre commande chez McDonald's est prete ! Allez la chercher !\n");
            printf("Avancez directement jusqu'a chez McDonald's\n");
            printf("Si cette marque n'appartient a personne, vous etes libre de l'acheter ou non\n");
            printf("Si elle appartient deja a un autre joueur, versez-lui la somme convenue\n");
            printf("Si vous passez par la case Depart, recevez 200$\n");
        }
        if((pile->numeroCarte)==11)
        {
            printf("Aie, panne d'essence !\n");
            printf("Reculez de trois cases");
        }
        if((pile->numeroCarte==12))
        {
            printf("C'est votre jour de chance ! Avancez jusqu'a la case JACKPOT la plus proche et recevez la somme convenue !\n");
        }
        if((pile->numeroCarte)==13)
        {
            printf("Il est temps de s'acheter un nouveau bolide ! Avancez jusqu'au concessionaire automobile de votre choix !\n");
            printf("Si la marque choisie n'appartient a personne, vous etes libre de l'acheter ou non\n");
            printf("Si elle appartient deja a un autre joueur, versez-lui la somme convenue\n");
            printf("Si vous passez par la case Depart,recevez 200$\n");
        }
        if((pile->numeroCarte)==14)
        {
            printf("Vous souscrivez a l'abonnement Spotify Family. Pour vous remercier, chaque joueur vous verse 50$\n");
            verseJoueurs = 50;
            printf("\n");
            do
            {
                printf("Saisissez le nombre de joueurs autre que vous : \n");
                scanf("%d", &nombreJoueurs);
            }while((nombreJoueurs!=1) && (nombreJoueurs!=2) && (nombreJoueurs!=3));

            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            gain = verseJoueurs*nombreJoueurs;
            solde = somme+gain;
            printf("Votre solde est maintenant de : %d$\n", solde);

            printf("Le deuxieme joueur saisit sa somme d'argent : \n");
            scanf("%d", &somme2);
            if(somme2<perte)
            {
                printf("Joueur 2, vous n'avez pas assez d'argent pour payer\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde2 = somme2-perte;
                printf("Joueur 2, votre solde est maintenant de : %d$\n", solde2);
            }

            if(nombreJoueurs==2)
            {
                printf("Le troisieme joueur saisit sa somme d'argent : \n");
                scanf("%d", &somme3);
                if(somme3<perte)
                {
                    printf("Joueur 3, vous n'avez pas assez d'argent pour payer\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde3 = somme3-perte;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);
                }
            }
            if(nombreJoueurs==3)
            {
                printf("Un troisieme joueur saisit sa somme d'argent : \n");
                scanf("%d", &somme3);
                if(somme3<perte)
                {
                    printf("Joueur 3, vous n'avez pas assez d'argent pour payer\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde3 = somme3-perte;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);
                }
                printf("Le quatrieme joueur saisit sa somme d'argent : \n");
                scanf("%d", &somme4);
                if(somme4<perte)
                {
                    printf("Joueur 4, vous n'avez pas assez d'argent pour payer\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde4 = somme4-perte;
                    printf("Joueur 4, votre solde est maintenant de : %d$\n", solde4);
                }
            }
        }
        if((pile->numeroCarte)==15)
        {
            printf("Il est temps pour vous de prendre un peu de repos\n");
            printf("Avancez jusqu'au Parc Gratuit pour vous reposer\n");
            printf("Si vous passez par la case Depart, recevez 200$\n");
        }
        if((pile->numeroCarte)==16)
        {
            printf("Vous avez besoin de vous relooker pour une grande occasion !\n");
            printf("Payez 250$ pour vos courses\n");
            perte = 250;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            if(somme<perte)
            {
                printf("Vous n'avez pas assez d'argent pour payer\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
            }

        }

    }
    return pile;
}
