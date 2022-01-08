#include "Includes.h"
#include "Joueur.h"
#include "TestWindows.h"
//#include "Color.h"


int nb_de_joueurs()
{
    int nbjoueurs;

    printf("Saisir un nombre de joueurs :\n");
    fflush(stdin);
    scanf("%d", &nbjoueurs);

    while (nbjoueurs>4 || nbjoueurs<1)
    {
        printf("Erreur, veuillez saisir une chiffre compris entre 1 et 4 :\n");
        printf("Saisir un nombre de joueurs :\n");
        fflush(stdin);
        scanf("%d", &nbjoueurs);
    }

    return nbjoueurs;
}



void ini_jeu (int nbjoueurs, struct MONOP_JOUEUR Joueur[nbjoueurs])
{
    int i;

    //appel du ss-programme qui définit les cases prop couleurs/prix

    //Demande les noms des joueurs
    for(nbjoueurs=0; nbjoueurs<=4; nbjoueurs++)
    {
        //Color(15,0);
        printf("Veuillez saisir un nom :\n");
        fflush(stdin);
        scanf("%c", &Joueur[nbjoueurs].nom);
        printf("Vous possedez %d d'argent", &Joueur[nbjoueurs].argent);
    }

    place_actu_joueur = 0;

    for(i = 0; i < nbjoueurs; i++)//données des joueurs initialisées
    {
        Joueur[i].id = i;
        Joueur[i].argent = 1500;
        Joueur[i].position = 0;
    }



    //Appel du ss-programme qui commence? (aléatoire)
    void Premier_Tour(int nbjoueurs, struct MONOP_JOUEUR Tour[nbjoueurs], struct MONOP_JOUEUR Joueur[nbjoueurs])
    {
        int quiCommence = rand() %nbjoueurs +1;
        int i;

        for(i=0; i<nbjoueurs-1; i++)
        {
                if (Joueur[i].id==quiCommence)
                {
                    Tour[0] = Joueur[i];
                }
        }

        if (nbjoueurs==2)//si seulement 2 joueurs...
        {
            if (quiCommence==1)
            {
                Tour[1] = Joueur[1];
            }

            if (quiCommence==2)
            {
                Tour[1] = Joueur[0];
                printf("%s jouera apres %s\n", Tour[1].nom, Tour[0].nom);
            }
        }
    }
}



void tour_joueur(struct MONOP_JOUEUR Joueur[place_actu_joueur])
{
    if (Joueur[place_actu_joueur].argent >= 0)
    {
        //appel du ss-programme joueur suivant
    }
    else
    {
        void vente();

        //Le joueur fait faillite et le jeu est terminer !!!
        if (Joueur[place_actu_joueur].argent < 0)
        {
            printf("%s a fait faillite, les autres joueurs remporte la partie !!!\n", Joueur[place_actu_joueur].nom);
        }
    }
}




void Lancers_d_un_joueur(int nbjoueurs, struct MONOP_JOUEUR Joueur[place_actu_joueur])
{
    int lancer;//a modif en fonction de sa déclaration précédente

    //appel du ss-programme qui permet de lancer les dées

    if (Joueur[place_actu_joueur].position + lancer >= 32)//Le joueurs gagne 200$ s'il passe par la case départ (si 32 cases...)
    {
        Joueur[place_actu_joueur].argent += 200;
    }

    if (Joueur[place_actu_joueur].position + lancer == 5)//Si la case impôts est la cinquième...il paye 200$ d'amende
    {
        Joueur[place_actu_joueur].argent -= 200;
    }
}




int Sortir_de_prison(int* Nbtoursprison, int nbjoueurs, int* CarteSortiePrison, struct MONOP_JOUEUR Joueur[nbjoueurs])
{
    int sortie = '0';
    *Nbtoursprison =+ 1;

    if (Joueur[place_actu_joueur].position >= 30)//envoyé direct en prison sans le bonus case départ
    {
        Joueur[place_actu_joueur].argent -= 200;
    }

    do
    {
        printf("Veuillez taper 1 pour sortir en lançant les dés\n");
        if (*CarteSortiePrison>0)
        {
            printf("Veuillez taper 2 pour utiliser votre carte sortie de prison\n");
        }
        printf("Ou veuillez taper 3 pour payer l'amende\n");

        sortie = getchar();
        putchar(sortie);
        char sortie = fgetc(stdin);
    }while (sortie != '1' && sortie != '2' && sortie != '3');

    if (sortie == '1')
    {
        //appel du ss-programme qui permet de lancer les dés
        if (/*si doubles*/)
        {
            //Ss-programme des doubles sur trois tours
        }
        else (*Nbtoursprison >= 3);
        {
            Joueur[place_actu_joueur].argent -= 200;//paye l'amende
        }
    }

    if (sortie == '2')
    {
        *CarteSortiePrison -= 1;
        //appel du ss-programme qui permet de lancer les dés
    }

    if (sortie == '3')
    {
        printf("Vous payez l'amende pour sortir\n");
        Joueur[place_actu_joueur].argent -= 200;
        //appel du ss-programme qui permet de lancer les dés
    }
}



void vente(int prop_id, struct ID_proprieter Proprieter[prop_id], struct MONOP_JOUEUR Joueur[place_actu_joueur])
{
    printf("Vous devez vendre une maison ou l'hypothequer pour continuer de jouer\n");

    if (Proprieter[prop_id].proprio == place_actu_joueur && Proprieter[prop_id].hypo == 0 && Proprieter[prop_id].amelioration > 0)
    {
        Proprieter[prop_id].amelioration--;//retire une maison
        Joueur[place_actu_joueur].argent += (Proprieter[prop_id].prix_de_amelioration/2);
    }
    else
    {
        printf("Vous ne pouvez pas detruire\n");
    }


    if (Joueur[place_actu_joueur].argent < 0)
    {
        void hypo(int prop_id, struct ID_proprieter Proprieter[prop_id], struct MONOP_JOUEUR Joueur[place_actu_joueur]);
        {
            int prop_id;
            struct MONOP_JOUEUR Joueur[place_actu_joueur];
            struct ID_proprieter Proprieter[prop_id];

            if (Proprieter[prop_id].proprio == place_actu_joueur)
            {
                int j;
                if (Proprieter[prop_id].amelioration > 0)
                {
                    printf("Impossible, vous ne pouvez hypothequer avec des maisons !\n");
                    return;
                }

            for (j=0; j<40; j++)
            {
                if (Proprieter[j].type == Proprieter[prop_id].type)
                {
                    if (Proprieter[j].amelioration > 0)
                    {
                        printf("Vous devez tout d'abord detruire vos maisons\n");
                        return;
                    }
                }
             }

             if (Proprieter[prop_id].hypo==0 && Proprieter[prop_id].amelioration==0)//Terrain hypothéquable et sans maisons
             {
                 Joueur[place_actu_joueur].argent += (Proprieter[prop_id].prix/2);//hypothéquer= prix du terrain/2
                 Proprieter[prop_id].hypo = 1;//terrain plus hypothéquable
             }
             else
             {
                 if(Joueur[place_actu_joueur].argent >= (Proprieter[prop_id].prix/2))//si le joueur possede plus d'argent que l'hypo va lui rapporter alors il ne peut pas hypothéquer
                 {
                     Joueur[place_actu_joueur].argent -= (Proprieter[prop_id].prix/2);
                     Proprieter[prop_id].hypo = 0;//le terrain reste hypothéquable
                 }
             }
        }
        else
        {
            printf("Vous ne pouvez pas hypothequer\n");
        }
    }
}



int main()
{
    srand(time(NULL));
    int nb, nbjoueurs;
    int prop_id;
    int lancer;//modif selon le nom donné
    int newposition = place_actu_joueur + lancer;

    //Appels
    nb = nb_de_joueurs();

    struct MONOP_JOUEUR Joueur[nbjoueurs];

    void ini_jeu (int nbjoueurs, struct MONOP_JOUEUR Joueur[nbjoueurs]);
    void Lancers_d_un_joueur(int nbjoueurs, struct MONOP_JOUEUR Joueur[nbjoueurs]);

    return 0;
}
