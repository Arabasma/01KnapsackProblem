
#ifndef KNAPSACKPROBLEM01_BRANCHANDBOUND_H
#define KNAPSACKPROBLEM01_BRANCHANDBOUND_H

//#include <vector>
#include <tuple>
#include <map>
#include <algorithm>
#include <iostream>
#include<queue>
// Structure qui contiendra pour chaque objet le poids ainsi que sa valeur
struct Object{
    int weight;
    int value;
};

// Noeud : structure permettant de stocker les informations à propos de l'arbre de décision
struct Noeud
{
	int niveau;//niveau du noeud dans l'arbre de décision (ou dans l'index arr[]

	int profit;// profit --> Profit des noeuds appartenant à la branche depuis la racine à ce noeud

	int  majorant;//majorant du profit max dans le sous arbre du noeud

	float poid;
};

class BranchAndBound01 {
public :
	BranchAndBound01(int maxWeight, Object obj[], int nbr);
	int knapsack();
private :
	int W;
	Object arr[1000];
	int n;
	int Profit;
	bool cmp(Object a, Object b);
	int bound(Noeud u, int n, int W, Object arr[]);
};

#endif //01KNAPSACKPROBLEM_BRANCHANDBOUND_H
