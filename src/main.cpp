#include <iostream>
#include "NNPattern.h"
#include "TNetSOM.h"

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <data_file> <genes_exist>" << std::endl;
        return 1;
    }

    bool GeneNamesExists = (std::atoi(argv[2]) == 1);
    
    TNetSOM myNetSOM;
    
    myNetSOM.RunTrn(); // Train SOM
    
    return 0;
}
