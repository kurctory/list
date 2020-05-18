#include "list.h"


pair < list<int>, list<int> > pml(const list<int> l)
{
    list <int> lp, lm;
    for (auto& it : l)
        if (it > 0) lp.emplace_back(it);
        else if (it < 0) lm.emplace_back(it);
    return make_pair(lp, lm);
}

