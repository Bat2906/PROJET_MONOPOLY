#include "Structures.h"
#include"include.h"


t_carteCaisseCommunaute*creer2()
{
    t_carteCaisseCommunaute*pile;
    int gain, perte, somme, solde, nombre_Joueurs, choix;
    int somme2, somme3, somme4, solde2, solde3, solde4;

    pile = (t_carteCaisseCommunaute**)malloc(1*sizeof(t_carteCaisseCommunaute*));

    if(pile!=NULL)
    {
        printf("Saisir le numero de la carte : \n");
        scanf("%d", &pile->numeroCarte);
        if((pile->numeroCarte)==1)
        {
            printf("Vous avez ete arrete pour vol !! Allez en PRISON !\n");
            printf("Allez directement en prison, ne passez pas par la case Depart et ne recevez pas 200$\n");
        }
        if((pile->numeroCarte)==2)
        {
            printf("Vous decidez de rendre un produit car il ne vous convient pas\n");
            printf("Vous demandez un remboursement. Recevez 150$\n");
            gain = 150;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme+gain;
            printf("Votre solde est maintenant de : %d$\n", solde);
        }
        if((pile->numeroCarte)==3)
        {
            printf("Vous souscrivez a l'abonnement YouTube Premium\n");
            printf("Payez 50$ a la banque\n");
            perte = 50;
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
        if((pile->numeroCarte)==4)
        {
            printf("Vous etes libere de prison\n");
            printf("Cette carte peut etre conservee, vendue ou echangee a un autre joueur\n");
        }
        if ((pile->numeroCarte)==5)
        {
            printf("Votre job d'ete chez McDonald's vous rapporte gros !!\n");
            printf("Pour votre investissement et votre service de qualite, recevez 200$ \n");
            gain = 200;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme+gain;
            printf("Votre solde est maintenant de : %d$\n", solde);

        }
        if ((pile->numeroCarte)==6)
        {
            printf("Avance sur vos profits !!\n");
            printf("Avancez jusqu'a la case depart et touchez votre salaire de 200$\n");
        }
        if ((pile->numeroCarte)==7)
        {
            printf("Vos investissements sont catastrophiques et les clients ne sont pas satisfaits !!\n");
            printf("Versez 50$ a chaque joueur en dedommagement\n");
            do
            {
                printf("Saisissez le nombre de joueurs autres que vous : \n");
                scanf("%d", &nombre_Joueurs);
            }while((nombre_Joueurs!=1) && (nombre_Joueurs!=2) && (nombre_Joueurs!=3));

            perte = 50*nombre_Joueurs;
            gain = 50;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            if(somme<perte)
            {
                printf("Vousn'avez pas assez d'argent pour payer\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
                printf("Un deuxieme joueur saisit sa somme d'argent : \n");
                scanf("%d", &somme2);
                solde2 = somme2+gain;
                printf("Joueur 2, votre solde est maintenant de : %d$\n", solde2);
                if(nombre_Joueurs==2)
                {
                    printf("Le troisieme joueur saisit sa somme d'argent : \n");
                    scanf("%d", &somme3);
                    solde3 = somme3+gain;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);
                }
                if(nombre_Joueurs==3)
                {
                    printf("Un troisieme joueur saisit sa somme d'argent : \n");
                    scanf("%d", &somme3);
                    solde3 = somme3+gain;
                    printf("Joueur 3, votre solde est maintenant de : %d$\n", solde3);

                    printf("Le quatrieme joueur saisit sa somme d'argent : \n");
                    scanf("%d", &somme4);
                    solde4 = somme4+gain;
                    printf("Joueur 4, votre solde est maintenant de : %d$\n", solde4);
                }
            }

        }
        if ((pile->numeroCarte)==8)
        {
            printf("Vous decidez de rentabiliser votre nouvelle voiture en devenant coursier chez Uber\n");
            printf("Chaque joueur vous verse 50$\n");
            do
            {
                printf("Saisissez le nombre de joueurs autres que vous : \n");
                scanf("%d", &nombre_Joueurs);
            }while((nombre_Joueurs!=1) && (nombre_Joueurs!=2) && (nombre_Joueurs!=3));

            gain = 50*nombre_Joueurs;
            perte = 50;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
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

            if(nombre_Joueurs==2)
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
            if(nombre_Joueurs==3)
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
        if ((pile->numeroCarte)==9)
        {
            printf("Dior a besoin d'un nouveau mannequin et vous choisit !\n");
            printf("Avancez directement chez Dior\n");
            printf("Si vous passez par la case Depart, recevez 200$\n");
            printf("Si cette marque n'appartient a personne vous avez le choix de l'achetr ou non\n");
            printf("Si elle appartient a un autre joueur, versez-lui la somme convenue\n");
        }
        if((pile->numeroCarte)==10)
        {
            printf("Vous avez poste sur YouTube du contenu interdit et punissable !\n");
            printf("Vous devez payer une amende de 250$ a la banque !\n");
            perte = 250;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            if(somme<perte)
            {
                printf("Vous n'avez pas assez d'argent pour payer !\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
            }
        }
        if((pile->numeroCarte)==11)
        {
            printf("Pendant cette periode difficle, Netflix cartonne et vous y avez bien contribue !\n");
            printf("Recevez 300$\n");
            gain = 300;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme+gain;
            printf("Votre solde est maitenant de : %d$\n", solde);
        }
        if((pile->numeroCarte)==12)
        {
            printf("Oups !! Vous avez egare votre portefeuille !!\n");
            printf("Reculez de quatre cases pour aller le chercher\n");
        }
        if ((pile->numeroCarte)==13)
        {
            printf("Vous avez enfreint les regles de confidentialite de Google !\n");
            printf("Payez 150$\n");
            perte =150;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            if(somme<perte)
            {
                printf("Vous n'avez pas assez d'argent pour payer !\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
            }
        }
        if((pile->numeroCarte)==14)
        {
            printf("Votre contribution au developpement d'une branche de Microsoft vous rapporte !\n");
            printf("Vous devez toucher 100$\n");
            gain = 100;
            printf("\n");
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            solde = somme+gain;
            printf("Votre solde est maitenant de : %d$\n", solde);
        }
        if((pile->numeroCarte)==15)
        {
            printf("Uber a porte plainte contre vous pour mauvais comportement envers un chauffeur !!\n");
            printf("Payez 250$ d'amende !\n");
            perte = 250;
            printf("Saisissez votre somme d'argent : \n");
            scanf("%d", &somme);
            if(somme<perte)
            {
                printf("Vous n'avez pas assez d'argent pour payer !\n");
                printf("Vous avez fait faillite, vous avez perdu !\n");
            }
            else
            {
                solde = somme-perte;
                printf("Votre solde est maintenant de : %d$\n", solde);
            }
        }
        if((pile->numeroCarte)==16)
        {
            printf("Payez une amende de 150$ ou avancez jusqu'a Twitter\n");
            perte = 150;
            do
            {
                printf("Saisissez 1 pour payer l'amende ou 2 pour avancer jusqu'a Twitter : \n");
                scanf("%d", &choix);
                printf("\n");
            }while((choix!=1) && (choix!=2));
            if(choix==1)
            {
                printf("Saisissez votre somme d'argent : \n");
                scanf("%d", &somme);
                if(somme<perte)
                {
                    printf("Vous n'avez pas assez d'argent pour payer !\n");
                    printf("Vous avez fait faillite, vous avez perdu !\n");
                }
                else
                {
                    solde = somme-perte;
                    printf("Votre solde est maintenant de : %d$\n", solde);
                }
            }
            if(choix==2)
            {
                printf("Avancez jusqu'a Twitter\n");
                printf("Si cette marque n'appartient a personne, vous etes libre ou non de l'acheter\n");
                printf("Si elle appartient deja a un autre joueur, versez-lui la somme convenue\n");
                printf("Si vous passez par la case Depart, recevez 200$\n");
            }
        }
    }
    return pile;
}
