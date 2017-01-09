/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: paviotch
 *
 * Created on December 6, 2016, 10:29 AM
 */

#include <cstdlib>
#include "cRegArchModel.h"
#include "cAR.h"

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Instanciation du modele : " << endl;
    cData *myData = new cData();
    cRegArchModel *myModel = new cRegArchModel();
    cGlobalMean *myGlobMean = new cGlobalMean();
    
    cGSLVector const *myVect = new cGSLVector(5,6); 
    cAR * myAR = new cAR(*myVect);
    myGlobMean->addMean(myAR);
    int size = myGlobMean->sizeMean();
 
    cout << "size : " << size << endl;
    myAR->mParams->Print();
    
    cout << "Simulation : " << endl;
    return 0;
}

