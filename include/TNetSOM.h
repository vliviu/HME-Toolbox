#ifndef TNETSOM_H
#define TNETSOM_H

#include "NNPattern.h"

class TNetSOM {
public:
    TNetSOM();
    ~TNetSOM();

    void RunTrn(); // Method to train the SOM
    void GenesForClusters(); // Method to save node contents for all nodes

private:
    NNPattern* Pattern; // Pointer to pattern data to train the net
    // Additional private members and methods...
};

#endif // TNETSOM_H
