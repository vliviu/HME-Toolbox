#ifndef NNPATTERN_H
#define NNPATTERN_H

#include <iostream>
#include <cstdlib>

class NNPattern {
public:
    double **P; // training pattern data
    double **TP; // testing pattern data
    char **PDescr; // pattern description
    int **ClassLabels; // class identifiers for each of the patterns
    int *Shuffle;
    int NumPatterns; // number of training patterns
    int NumLabels; // number of functional labels
    int NumTstPatterns; // number of testing patterns
    int SizeVector;
    int NClasses;

    NNPattern();
    ~NNPattern();
    
    int GetPatternsFromFile(const char *filename, int *npatterns, int *dimensionality, int *nlabels);
    // Additional method declarations...

private:
    // Private members and methods...
};

#endif // NNPATTERN_H
