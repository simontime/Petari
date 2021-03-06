#ifndef LIVEACTORUTIL_H
#define LIVEACTORUTIL_H

class LiveActor;

namespace MR
{
    bool isDead(const LiveActor *);
    bool isHiddenModel(const LiveActor *);
    void showModel(LiveActor *);
    void hideModel(LiveActor *);
    void hideModelAndOnCalcAnim(LiveActor *);

    bool isClipped(const LiveActor *);
    bool isNoEntryDrawBuffer(const LiveActor *);

    void validateCollisionParts(LiveActor *);
    void invalidateCollisionParts(LiveActor *);
};

#endif // LIVEACTORUTIL_H