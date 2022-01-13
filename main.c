#include "include.h"
#include "Structures.h"

void couleur(int couleurtexte, int couleurfond)
{
     HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurfond*16+couleurtexte);
}


void gotoligcol( int lig, int col )
{
  COORD mycoord;

  mycoord.X = col;

  mycoord.Y = lig;

  SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

void debut()
{
    printf("\n        €€€€€      €€€€€        €€€€€€        €€€€         €€         €€€€€€         €€€€€€€            €€€€€       €€€       €€€     €€€");
    printf("\n        €€ €€     €€  €€      €€€    €€€      €€ €€        €€       €€€    €€€       €€    €€€        €€€   €€€     €€€        €€€   €€€");
    printf("\n        €€  €€   €€   €€      €€€    €€€      €€  €€       €€       €€€    €€€       €€     €€€       €€€   €€€     €€€         €€€ €€€");
    printf("\n        €€   €€ €€    €€      €€€    €€€      €€   €€      €€       €€€    €€€       €€     €€€       €€€   €€€     €€€          €€ €€");
    printf("\n        €€    €€€€    €€      €€€    €€€      €€    €€     €€       €€€    €€€       €€    €€€        €€€   €€€     €€€           €€€");
    printf("\n        €€     €€     €€      €€€    €€€      €€     €€    €€       €€€    €€€       €€€€€€€          €€€   €€€     €€€           €€€");
    printf("\n        €€            €€      €€€    €€€      €€      €€   €€       €€€    €€€       €€               €€€   €€€     €€€           €€€");
    printf("\n        €€            €€      €€€    €€€      €€       €€  €€       €€€    €€€       €€               €€€   €€€     €€€           €€€");
    printf("\n        €€            €€        €€€€€€        €€        €€€€€         €€€€€€         €€                 €€€€€       €€€€€€€€€     €€€");


}

void Menu()
{
    int choixMenu;

    //couleur(10,1);
    gotoligcol(20, 20);

    printf("MENU PRINCIPAL\n");

    printf(" \n");

    printf("1.Lancer une nouvelle partie\n");
    printf(" \n");

    printf("2.Sauvegarder  partie en cours\n");
    printf(" \n");
    printf("3.Charger une ancienne partie\n");
    printf(" \n");

    printf("4.Les regles du jeu\n");
    printf(" \n");

    printf("5.Le nom des membres du projet\n");
    printf(" \n");

    printf("6.Quitter\n");
    printf(" \n");

    //couleur(15,1);

    printf("Quel est votre choix ?\n");
    printf(" \n");

    scanf("%d", &choixMenu);

    switch(choixMenu)
    {
        case 1:
        printf("Vous avez choisi de lancer une nouvelle partie\n");
        break;
        case 2:
        printf("Vous avez choisi de sauvegarder la partie en cours\n");
        break;
        case 3 :
        printf("Vous avez choisi de charger une ancienne partie\n");
        break;
        case 4:
        printf("REGLES DU JEU\n");
        break;
        case 5:
        printf("Vous avez choisi d'afficher le nom des membres de l'equipe du projet\n");
        printf("Julien SMATT\n");
        printf("Baptiste MEDARD\n");
        printf("Jennifer KOUASSI\n");
        break;
        case 6:
        printf("Etes vous certain(e) de quitter ?\n");
        break;
        default :
        printf("Continuer de jouer\n");
    }

    printf(" \n");
}

void plateau()
{
    couleur(15,0);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                      Visite %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xDB, 0xDB, 0xDB, 0x41, 0x6D, 0x61, 0x7A, 0x6F, 0x6E, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0x4D, 0x63, 0x44, 0x6F, 0x6E, 0x61, 0x6C, 0x64, 0x27, 0x73, 0xDB, 0xDB, 0xDB, 0x55, 0x62, 0x65, 0x72, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0x53, 0x70, 0x6F, 0x74, 0x69, 0x66, 0x79, 0xDB, 0xDB, 0xDB, 0x43, 0x61, 0x69, 0x73, 0x73, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0x59, 0x6F, 0x75, 0x54, 0x75, 0x62, 0x65, 0xDB, 0xDB, 0xDB, 0x4E, 0x65, 0x74, 0x66, 0x6C, 0x69, 0x78, 0xDB, 0xDB, 0x20, 0x20, 0x50, 0x61, 0x72, 0x63, 0x20, 0xDB, 0xDB);
    printf("                      Simple %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xBA, 0x50, 0x52, 0x49, 0x53, 0x4F, 0x4E, 0xBA, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x3F, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x4A, 0x41, 0x43, 0x4B, 0x50, 0x4F, 0x54, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x64, 0x65, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x47, 0x72, 0x61, 0x74, 0x75, 0x69, 0x74, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xDB, 0xDB, 0xDB, 0xDB, 0x31, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x31, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0x63, 0x6F, 0x6D, 0x6D, 0x75, 0x6E, 0x61, 0x75, 0x74, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x01, 0x02, 0x01, 0x20, 0x20, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             ------------------------------------------------------------------------------------------------------------------------\n");
    couleur(13,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x54, 0x65, 0x73, 0x6C, 0x61, 0xDB, 0xDB, 0xDB, 0xDB, 0x54, 0x69, 0x6B, 0x54, 0x6F, 0x6B, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0x31, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(11,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x4D, 0x65, 0x72, 0x63, 0x65, 0x64, 0x65, 0x73, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x3F, 0x20, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x31, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(10,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x54, 0x77, 0x69, 0x74, 0x74, 0x65, 0x72, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x20, 0x3F, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x32, 0x35, 0x30, 0x24, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(9,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x41, 0x75, 0x64, 0x69, 0xDB, 0xDB, 0xDB, 0xDB, 0x46, 0x61, 0x63, 0x65, 0x62, 0x6F, 0x6F, 0x6B, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x33, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x31, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(8,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x4A, 0x41, 0x43, 0x4B, 0x50, 0x4F, 0x54, 0xDB, 0xDB, 0xDB, 0x4A, 0x41, 0x43, 0x4B, 0x50, 0x4F, 0x54, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(7,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0x4B, 0x52, 0x41, 0x43, 0x48, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x53, 0x6F, 0x6E, 0x79, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x42, 0x4F, 0x55, 0x52, 0x53, 0x49, 0x45, 0x52, 0xDB, 0xDB, 0xDB, 0xDB, 0x33, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(6,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0xDB, 0xDB, 0x43, 0x61, 0x69, 0x73, 0x73, 0x65, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x64, 0x65, 0x20, 0x20, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0x63, 0x6F, 0x6D, 0x6D, 0x75, 0x6E, 0x61, 0x75, 0x74, 0x65);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(5,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x43, 0x61, 0x69, 0x73, 0x73, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0x53, 0x61, 0x6D, 0x73, 0x75, 0x6E, 0x67, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x20, 0x20, 0x64, 0x65, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0x63, 0x6F, 0x6D, 0x6D, 0x75, 0x6E, 0x61, 0x75, 0x74, 0x65, 0xDB, 0xDB, 0xDB, 0x33, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             -----------                                                                                                  -----------\n");
    couleur(4,0);printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0x47, 0x6F, 0x6F, 0x67, 0x6C, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0x41, 0x70, 0x70, 0x6C, 0x65, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x33, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|                                                                                                  |%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             ------------------------------------------------------------------------------------------------------------------------\n");
    couleur(15,0);printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x44, 0x45, 0x50, 0x41, 0x52, 0x54, 0x20, 0x1E, 0xDB, 0xDB, 0xDB, 0xDB, 0x4E, 0x69, 0x6B, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x54, 0x41, 0x58, 0x45, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x41, 0x64, 0x69, 0x64, 0x61, 0x73, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0xDB, 0x4C, 0x6F, 0x75, 0x69, 0x73, 0xDB, 0xDB, 0xDB, 0xDB, 0x43, 0x61, 0x69, 0x73, 0x73, 0x65, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x44, 0x69, 0x6F, 0x72, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x47, 0x75, 0x63, 0x63, 0x69, 0xDB, 0xDB, 0xDB, 0xDB, 0x41, 0x4C, 0x4C, 0x45, 0x5A, 0x20, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x52, 0x65, 0x63, 0x65, 0x76, 0x65, 0x7A, 0xB3, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x44, 0x45, 0x20, 0x4C, 0x55, 0x58, 0x45, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x3F, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x4A, 0x41, 0x43, 0x4B, 0x50, 0x4F, 0x54, 0xDB, 0xDB, 0xDB, 0x56, 0x75, 0x69, 0x74, 0x74, 0x6F, 0x6E, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x64, 0x65, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x45, 0x4E, 0x20, 0x20, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0x20, 0x20, 0x32, 0x30, 0x30, 0x24, 0x20, 0xB3, 0xDB, 0xDB, 0xDB, 0xDB, 0x35, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x25, 0x9D, 0xA9, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x34, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x20, 0x20, 0x20, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x34, 0x30, 0x30, 0x24, 0xDB, 0xDB, 0x63, 0x6F, 0x6D, 0x6D, 0x75, 0x6E, 0x61, 0x75, 0x74, 0x65, 0xDB, 0xDB, 0xDB, 0x33, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0x33, 0x35, 0x30, 0x24, 0xDB, 0xDB, 0xDB, 0xDB, 0x50, 0x52, 0x49, 0x53, 0x4F, 0x4E, 0xDB, 0xDB);
    printf("                             %c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c|%c%c%c%c%c%c%c%c%c%c\n", 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);

}

void Pseudos()
{
    char joueur1[15];
    char joueur2[15];
    char joueur3[15];
    char joueur4[15];
    int nombreJoueurs, Joueur1, Joueur2, Joueur3, Joueur4;
    int choix;

    do
    {
        printf("Entrez le nombre de joueurs : \n");
        scanf("%d", &nombreJoueurs);
        printf("\n");
    }while((nombreJoueurs!=2) && (nombreJoueurs!=3) && (nombreJoueurs!=4));

    //solde = SoldeDepart(solde);
    printf("Il y a %d joueurs\n", nombreJoueurs);
    printf("\n");
    printf("Entrez le pseudo du premier joueur : \n");
    scanf("%s", &joueur1);
    printf("\n");
    printf("%s tu es le joueur n°1\n", joueur1);
    printf("\n");
    printf("Ton pion est : %c\n", 0x03);
    //printf("Ta solde est de : %d$\n", solde);
    printf("\n");
    printf("Entrez le pseudo du deuxieme joueur : \n");
    scanf("%s", &joueur2);
    printf("\n");
    printf("%s tu es le joueur n°2\n", joueur2);
    printf("\n");
    printf("Ton pion est : %c\n", 0x04);
    //printf("Ta solde est de : %d$\n", solde);
    printf("\n");

    if(nombreJoueurs==3)
    {
        printf("Entrez le pseudo du troisieme joueur : \n");
        scanf("%s", &joueur3);
        printf("\n");
        printf("%s tu es le joueur n°3\n", joueur3);
        printf("\n");
        printf("Ton pion est : %c\n", 0x05);
        //printf("Ta solde est de : %d$\n", solde);
        printf("\n");
    }

    if(nombreJoueurs==4)
    {
        printf("Entrez le pseudo du troisieme joueur : \n");
        scanf("%s", &joueur3);
        printf("\n");
        printf("%s tu es le joueur n°3\n", joueur3);
        printf("\n");
        printf("Ton pion est : %c\n", 0x05);
        //printf("Ta solde est de : %d$\n", solde);
        printf("\n");
        printf("Entrez le pseudo du quatrieme joueur : \n");
        scanf("%s", &joueur4);
        printf("\n");
        printf("%s tu es le joueur n°4\n", joueur4);
        printf("\n");
        printf("Ton pion est : %c", 0x06);
        //printf("Ta solde est de : %d$\n", solde);
        printf("\n");
    }
    printf("\n");
    printf("Bonne partie a vous !!!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    Joueur1 = 1;
    Joueur2 = 2;
    Joueur3 = 3;
    Joueur4 = 4;

    if(nombreJoueurs==2)
    {
        choix = rand()%(2-1)+1;
        printf("C'est au joueur n°%d de jouer",choix);
        printf("\n");
    }
    if(nombreJoueurs==3)
    {
        choix = rand()%(3-1)+1;
        printf("C'est au joueur n°%d de jouer", choix);
        printf("\n");
    }
    if(nombreJoueurs==4)
    {
        choix = rand()%(Joueur4 - Joueur1)+ Joueur1;
        printf("C'est au joueur n°%d de jouer", choix);
        printf("\n");
    }

    choixJoueur(nombreJoueurs);
}

void choixJoueur(int nombreJoueurs)
{
    int i, n, j;
    int place_actu_joueur=0;
    struct MONOP_JOUEUR Joueur[place_actu_joueur];
    printf("L'ordre des joueurs est le suivant\n");

    for (i=1; i<=nombreJoueurs; i++)
    {
        n = rand()%nombreJoueurs +1;
        printf("%d\n", n);
    }

    for(j=1; j < nombreJoueurs; j++)//données des joueurs initialisées
    {
        Joueur[j].argent = 1500;
        Joueur[j].id = j;
        Joueur[j].position = 0;
    }
}

void Lancersdes()
{
    int premierDe, secondDe;
    int lancer;
    int doubles = 0;
    int nexposition;
    int place_actu_joueur=0;
    int newposition = place_actu_joueur + lancer;
    struct MONOP_JOUEUR Joueur[newposition];

    srand(time(NULL));

    printf("Lancer les des : \n");
    premierDe = rand()%(6-1)+1;
    secondDe = rand()%(6-1)+1;
    printf("|%d| ", premierDe);
    printf(" |%d|\n", secondDe);
    printf("\n");
    lancer = premierDe + secondDe;
    printf("Avancez votre pion de %d\n", lancer);
    Joueur[place_actu_joueur].position=newposition;

    do
    {
        if (premierDe==secondDe)
        {
            printf("Vous avez fait un double\n");
            printf("\n");
            printf("Veuillez relancer les des : \n");
            premierDe = rand()%(6-1)+1;
            secondDe = rand()%(6-1)+1;
            printf("|%d| ", premierDe);
            printf(" |%d|\n", secondDe);

            printf("\n");
            lancer = premierDe + secondDe;
            printf("Avancez votre pion de %d\n", lancer);
            printf("\n");
            Joueur[place_actu_joueur].position=newposition;

            doubles = doubles+1;
        }

    }while(premierDe==secondDe);

    if (doubles==3)
    {
        printf("Allez en prison !");
        Joueur[newposition].position=31;
    }
}

void tourjoueur()
{
    int lancer, id, argent;
    struct MONOP_JOUEUR Joueur[id];
    int newposition;
    newposition = place_actu_joueur + lancer;
    int solde;


    if (Joueur[id].argent >= 0)
    {
        Lancersdes();

        if (Joueur[place_actu_joueur].position + lancer >= 40)//Le joueurs gagne 200$ s'il passe par la case départ
        {
            Joueur[id].argent += 200;
        }

        if (Joueur[place_actu_joueur].position + lancer == 5)//Si la case impôts est la cinquième...il paye 200$ d'amende
        {
            Joueur[id].argent -= 200;
        }

        //Carte Chance
        t_carteChance*creer();
        t_carteChance**tasDeCartes;
        int taille = 16;
        int i, indice;
        indice = 0;

        tasDeCartes = (t_carteChance**)malloc(taille*sizeof(t_carteChance*));
        if(tasDeCartes==NULL)
        {
            printf("probleme d'allocation\n");
        }

        tasDeCartes[i] = creer();
        indice = indice+1;


        //Carte Communauté
        t_carteCaisseCommunaute*creer2();
        t_carteCaisseCommunaute**tasDeCartes2;
        int taille2 = 9;

        tasDeCartes2 = (t_carteCaisseCommunaute**)malloc(taille2*sizeof(t_carteCaisseCommunaute*));
        if(tasDeCartes2==NULL)
        {
            printf("probleme d'allocation\n");
        }

        tasDeCartes2[i] = creer();
        indice = indice+1;

        //Case Jackpot
        if (Joueur[newposition].position=6)
        {
            afficherConsigne();
            sommeTotale();
        }
        if (Joueur[newposition].position=16)
        {
            afficherConsigne();
            sommeTotale();
        }
        if (Joueur[newposition].position=26)
        {
            afficherConsigne();
            sommeTotale();
        }
        if (Joueur[newposition].position=36)
        {
            afficherConsigne();
            sommeTotale();
        }

        //Taxe de luxe
        if (Joueur[newposition].position=39)
        {
            affichage();
            printf("\n");
            solde = paiement(solde);
        }

        //Krach boursier
        if (Joueur[newposition].position=5)
        {
            choix2Joueur();
            printf("\n");
            solde = paiement(solde);
        }

        //Prison
        if (Joueur[newposition].position=30)
        {
            Sortirdeprison();
        }

        AcheterProp();
    }
    else
    {
        void vente();

        //Le joueur fait faillite et le jeu est terminer !!!
        if (Joueur[id].argent < 0)
        {
            printf("%s a fait faillite, les autres joueurs remporte la partie !!!\n", Joueur[id].id);
        }
    }
}

void afficherConsigne()
{
    printf("JACKPOT !!!\n");
    printf("Vous avez touche le Jackpot ! Recevez 350$\n");
}
void sommeTotale()
{
    int gain, somme, sommeTot;
    gain = 350;
    printf("Saisissez votre somme d'argent : \n");
    scanf("%d", &somme);
    sommeTot = somme+gain;
    printf("Votre solde est maintenant de : %d$\n", sommeTot);
}

void affichage()
{
    int pseudo[15];
    int marque[15];
    printf("Vous etes arrive sur Taxe de Luxe\n");
    printf("Saisissez votre pseudo : \n");
    scanf("%s", pseudo);
    printf("%s, saisissez le nom de la derniere marque que vous avez achetee : \n", pseudo);
    scanf("%s", marque);
    printf("Remettez cette carte a la banque\n");
    printf("Cette marque est remise en jeu\n");
}
int paiement(int solde_Actuelle)
{
    int somme, perte;
    printf("Vous devez aussi payer 100$ a la banque\n");
    perte = 100;
    printf("Saisissez votre somme d'argent : \n");
    scanf("%d", &somme);
    if(somme<perte)
    {
        printf("Vous n'avez pas assez d'argent pour payer !\n");
        printf("Vous avez fait faillite, vous avez perdu !\n");
    }
    else
    {
        solde_Actuelle = somme-perte;
        printf("Votre solde est maintenant de : %d$\n", solde_Actuelle);
    }
    return solde_Actuelle;
}

void choix2Joueur()
{
    char nomJoueur[20];
    char marque[15];
    printf("Choisissez un joueur : \n");
    scanf("%s", nomJoueur);
    printf("%s, saisissez le nom de la derniere marque que vous avez achetee : \n", nomJoueur);
    scanf("%s", marque);
    printf("Remettez cette carte a la banque\n");
    printf("Cette marque est remise en jeu\n");

}

void Sortirdeprison(int* Nbtoursprison, int nbjoueurs, int* CarteSortiePrison, struct MONOP_JOUEUR Joueur[nbjoueurs])
{
    int sortie = '0';
    *Nbtoursprison =+ 1;
    int premierDe, secondDe;
    int k;

    if (Joueur[place_actu_joueur].position >= 31)//envoyé direct en prison sans le bonus case départ
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
        Lancersdes();
        if (premierDe==secondDe)
        {
            for (k=1; k<=3; k++)
            {
                *Nbtoursprison =+ 1;
            }
        }
        else (*Nbtoursprison >= 3);
        {
            Joueur[place_actu_joueur].argent -= 200;//paye l'amende
        }
    }

    if (sortie == '2')
    {
        *CarteSortiePrison -= 1;
        Lancersdes();
    }

    if (sortie == '3')
    {
        printf("Vous payez l'amende pour sortir\n");
        Joueur[place_actu_joueur].argent -= 200;
        Lancersdes();
    }
}

void initialisationProprieter()
{
    int l;
    char type;
    struct ID_proprieter Proprieter[type];

    for (l=1; l<41; l++)
    {
        Proprieter[l].id = l;
        Proprieter[l].amelioration = 0;
        Proprieter[l].proprio = -1;
        Proprieter[l].prix = 0;
        Proprieter[l].hypo = 0;
    }

    Proprieter[1].type = 'casedepart';

    Proprieter[1].type = 'blanc';
    Proprieter[1].prix = 60;
    Proprieter[1].loyer[0] = 12;
    Proprieter[1].loyer[1] = 20;
    Proprieter[1].loyer[2] = 40;
    Proprieter[1].loyer[3] = 100;
    Proprieter[1].loyer[4] = 170;
    Proprieter[1].loyer[5] = 260;
    Proprieter[1].amelloyer = 50;

    Proprieter[3].type = 'Carte Communauté';
    Proprieter[18].type = 'Carte Communauté';
    Proprieter[28].type = 'Carte Communauté';
    Proprieter[34].type = 'Carte Communauté';

    Proprieter[4].type = 'violetdeux';
    Proprieter[4].prix = 60;
    Proprieter[4].loyer[0] = 14;
    Proprieter[4].loyer[1] = 30;
    Proprieter[4].loyer[2] = 70;
    Proprieter[4].loyer[3] = 190;
    Proprieter[4].loyer[4] = 330;
    Proprieter[4].loyer[5] = 460;
    Proprieter[4].amelloyer = 50;

    Proprieter[5].type = 'Krach boursier';

    for (l=6; l<9; l+=3)
    {
        Proprieter[l].type = 'turquoise';
        Proprieter[l].prix = 110;
        Proprieter[l].loyer[0] = 16;
        Proprieter[l].loyer[1] = 40;
        Proprieter[l].loyer[2] = 100;
        Proprieter[l].loyer[3] = 280;
        Proprieter[l].loyer[4] = 410;
        Proprieter[l].loyer[5] = 560;
        Proprieter[l].amelloyer = 50;
    }

    Proprieter[3].type = 'Carte Chance';
    Proprieter[18].type = 'Carte Chance';
    Proprieter[28].type = 'Carte Chance';
    Proprieter[34].type = 'Carte Chance';

    Proprieter[10].type = 'vertfluo';
    Proprieter[10].prix = 110;
    Proprieter[10].loyer[0] = 18;
    Proprieter[10].loyer[1] = 50;
    Proprieter[10].loyer[2] = 110;
    Proprieter[10].loyer[3] = 310;
    Proprieter[10].loyer[4] = 460;
    Proprieter[10].loyer[5] = 610;
    Proprieter[10].amelloyer = 50;

    Proprieter[11].type = 'Visite prison';

    for (l=11; l<=14; l+=3)
    {
        Proprieter[l].type = 'bleufluo';
        Proprieter[l].prix = 150;
        Proprieter[l].loyer[0] = 20;
        Proprieter[l].loyer[1] = 60;
        Proprieter[l].loyer[2] = 160;
        Proprieter[l].loyer[3] = 460;
        Proprieter[l].loyer[4] = 635;
        Proprieter[l].loyer[5] = 760;
        Proprieter[l].amelloyer = 100;
    }

    Proprieter[15].type = 'grisfoncé';
    Proprieter[15].prix = 170;
    Proprieter[15].loyer[0] = 22;
    Proprieter[15].loyer[1] = 70;
    Proprieter[15].loyer[2] = 190;
    Proprieter[15].loyer[3] = 510;
    Proprieter[15].loyer[4] = 710;
    Proprieter[15].loyer[5] = 910;
    Proprieter[15].amelloyer = 100;

    for (l=16; l<=19; l+=3)
    {
        Proprieter[l].type = 'grisclair';
        Proprieter[l].prix = 190;
        Proprieter[l].loyer[0] = 24;
        Proprieter[l].loyer[1] = 80;
        Proprieter[l].loyer[2] = 210;
        Proprieter[l].loyer[3] = 560;
        Proprieter[l].loyer[4] = 765;
        Proprieter[l].loyer[5] = 960;
        Proprieter[l].amelloyer = 100;
    }

    Proprieter[20].type = 'vertkaki';
    Proprieter[20].prix = 210;
    Proprieter[20].loyer[0] = 26;
    Proprieter[20].loyer[1] = 90;
    Proprieter[20].loyer[2] = 230;
    Proprieter[20].loyer[3] = 610;
    Proprieter[20].loyer[4] = 810;
    Proprieter[20].loyer[5] = 1010;
    Proprieter[20].amelloyer = 100;

    for (l=21; l<=24; l+=3)
    {
        Proprieter[l].type = 'violet';
        Proprieter[l].prix = 230;
        Proprieter[l].loyer[0] = 28;
        Proprieter[l].loyer[1] = 100;
        Proprieter[l].loyer[2] = 260;
        Proprieter[l].loyer[3] = 710;
        Proprieter[l].loyer[4] = 885;
        Proprieter[l].loyer[5] = 1060;
        Proprieter[l].amelloyer = 160;
    }

    Proprieter[25].type = 'rougefoncé';
    Proprieter[25].prix = 250;
    Proprieter[25].loyer[0] = 30;
    Proprieter[25].loyer[1] = 110;
    Proprieter[25].loyer[2] = 310;
    Proprieter[25].loyer[3] = 760;
    Proprieter[25].loyer[4] = 935;
    Proprieter[25].loyer[5] = 1110;
    Proprieter[25].amelloyer = 150;

    for (l=26; l<=29; l+=3)
    {
        Proprieter[l].type = 'blanc';
        Proprieter[l].prix = 250;
        Proprieter[l].loyer[0] = 32;
        Proprieter[l].loyer[1] = 120;
        Proprieter[l].loyer[2] = 340;
        Proprieter[l].loyer[3] = 810;
        Proprieter[l].loyer[4] = 985;
        Proprieter[l].loyer[5] = 1160;
        Proprieter[l].amelloyer = 160;
    }

    Proprieter[30].type = 'gris';
    Proprieter[30].prix = 290;
    Proprieter[30].loyer[0] = 34;
    Proprieter[30].loyer[1] = 130;
    Proprieter[30].loyer[2] = 370;
    Proprieter[30].loyer[3] = 860;
    Proprieter[30].loyer[4] = 1135;
    Proprieter[30].loyer[5] = 1220;
    Proprieter[30].amelloyer = 150;

    Proprieter[31].type = 'Vaenprison';

    for (l=32; l<=34; l+=2)
    {
        Proprieter[l].type = 'jaune';
        Proprieter[l].prix = 310;
        Proprieter[l].loyer[0] = 36;
        Proprieter[l].loyer[1] = 140;
        Proprieter[l].loyer[2] = 400;
        Proprieter[l].loyer[3] = 910;
        Proprieter[l].loyer[4] = 1100;
        Proprieter[l].loyer[5] = 1285;
        Proprieter[l].amelloyer = 210;
    }

    Proprieter[35].type = 'rouge';
    Proprieter[35].prix = 330;
    Proprieter[35].loyer[0] = 38;
    Proprieter[35].loyer[1] = 160;
    Proprieter[35].loyer[2] = 460;
    Proprieter[35].loyer[3] = 1010;
    Proprieter[35].loyer[4] = 1210;
    Proprieter[35].loyer[5] = 1410;
    Proprieter[35].amelloyer = 210;

    Proprieter[38].type = 'vert';
    Proprieter[38].prix = 360;
    Proprieter[38].loyer[0] = 45;
    Proprieter[38].loyer[1] = 185;
    Proprieter[38].loyer[2] = 510;
    Proprieter[38].loyer[3] = 1110;
    Proprieter[38].loyer[4] = 1310;
    Proprieter[38].loyer[5] = 1510;
    Proprieter[38].amelloyer = 210;

    Proprieter[39].type = 'TaxedeLuxe';

    Proprieter[40].type = 'bleu';
    Proprieter[40].prix = 410;
    Proprieter[40].loyer[0] = 60;
    Proprieter[40].loyer[1] = 210;
    Proprieter[40].loyer[2] = 610;
    Proprieter[40].loyer[3] = 1410;
    Proprieter[40].loyer[4] = 1710;
    Proprieter[40].loyer[5] = 2010;
    Proprieter[40].amelloyer = 210;
}

void AcheterProp()
{
    int newposition, lancer, id;
    char type;
    newposition = place_actu_joueur + lancer;
    struct ID_proprieter Proprieter[type];
    struct MONOP_JOUEUR Joueur[place_actu_joueur];

    if(Proprieter[newposition].prix > 0)
    {
        if (Proprieter[newposition].proprio == -1)
        {
            Joueur[id].argent -= Proprieter[id].prix;
            Proprieter[newposition].proprio = place_actu_joueur;
        }
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
    void couleur(int couleurtexte,int couleurfond);
    void gotoligcol( int lig, int col );

    srand(time(NULL));

    debut();
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Bienvenue !\n");
    printf("\n");

    Menu();
    plateau();
    Pseudos();
    tourjoueur();


    return 0;
}
