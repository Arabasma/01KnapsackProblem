#include <iostream>

//Programme en C++ pour le problème du  sac à dos 0/1
// Méthode exacte utilisé : branch and Bound
#include <bits/stdc++.h>
#include "BranchAndBound01.h"

using namespace std;


int main()
{		
		 Object arr[] = {{957,20165},{948,19975},{57,1201},
                   {85,1791},{836,17615},{736,15508},
                   {670,14117},{309,6511},{606,	12769},
                   {607,12790},{582,12263},{159,3350},
                   {431,9081},{394,8302},{724,15255},
                   {995,20965},{950,20017},{545,11483},
                   {445,9376},{269,5668},{36,758},
                   {28,589},{465,9798},{319,6721},
                   {381,8028},{892,18795},{526,11083},
                   {561,11821},{237,4993},{24,505},
                   {326,6869},{137,2886},{511,10767},
                   {999,21050},{675,14223},{182,3834},
                   {894,18837},{797,16793},{735,15487},
                   {907,19111}};
                   
                   
    int W = 20600;
    int maxprofit=0 ;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    BranchAndBound01 bb(W,arr,n);
    auto start = std::chrono::high_resolution_clock::now();
     maxprofit = bb.knapsack();
      auto end = std::chrono::high_resolution_clock::now();

       cout << "profit maximum dynamique  " <<maxprofit<< endl;
       std::cout << "duree dynamique  : "<<std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();



	return 0;
}
