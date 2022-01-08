#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

struct MONOP_JOUEUR
{
    int id;
    int argent;
    char* nom;
    int sortie;
    int position;
};

struct ID_proprieter
{
    /*nom de la structure chargée des cases_couleurs*/ type;
    int id;
    int proprio;
    int hypo;
    int amelioration;
    int prix;
    int prix_de_amelioration;
};

#endif // JOUEUR_H_INCLUDED
