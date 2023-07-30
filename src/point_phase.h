#include "phase.h"

class PointPhase : Phase{
    public: 
    PointPhase(int p) : point(p){}
    RollOutcome get_outcome(Roll* roll);

    private:
    int point;
};