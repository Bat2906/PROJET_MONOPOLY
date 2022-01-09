#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

struct MONOP_JOUEUR
{
    int id;
    int argent;
    //char* nom;
    int sortie;
    int position;
};

typedef struct carteChance
{
    int numeroCarte;
    char consigne[200];
    int bonusOUmalus;
}t_carteChance;


typedef struct carteCaisseCommunaute
{
    int numeroCarte;
    char consigne[200];
    int bonusOUmalus;
}t_carteCaisseCommunaute;


struct ID_proprieter
{
    char type;
    int id;
    int proprio;
    int hypo;
    int amelioration;
    int prix;
    int prix_de_amelioration;
    int loyer[6];
    int amelloyer;
};

#endif // STRUCTURES_H_INCLUDED
