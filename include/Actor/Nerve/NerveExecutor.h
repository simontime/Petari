#ifndef NERVEEXECUTOR_H
#define NERVEEXECUTOR_H

#include "Actor/Nerve/Spine.h"
#include "types.h"

class NerveExecutor
{
public:
    NerveExecutor(const char *);

    virtual ~NerveExecutor();

    void initNerve(const Nerve *);
    void updateNerve();
    void setNerve(const Nerve *);
    bool isNerve(const Nerve* ) const;
    u32 getNerveStep() const;

    Spine* mSpine; // _4
};

#endif // NERVEEXECUTOR_H