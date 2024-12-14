#include "TNetSOM.h"

TNetSOM::TNetSOM() {
    Pattern = new NNPattern();
}

TNetSOM::~TNetSOM() {
    delete Pattern;
}

void TNetSOM::RunTrn() {
    // Training logic...
}

void TNetSOM::GenesForClusters() {
   // Logic to save node contents...
}
