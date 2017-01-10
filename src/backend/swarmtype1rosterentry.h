#ifndef SWARMTYPE1ROSTERENTRY_H
#define SWARMTYPE1ROSTERENTRY_H

#include "abstractgrouprosterentry.h"

class SwarmType1RosterEntry;
class SwarmType1;
class CUserManager;
class CCore;

class SwarmType1RosterEntry : public AbstractGroupRosterEntry
{
public:
    SwarmType1RosterEntry(SwarmType1&swarm);
    virtual ~SwarmType1RosterEntry();

    static SwarmType1RosterEntry* createRosterEntryForSwarmType1(SwarmType1&swarm);

#define SwarmType1RosterEntry_CLASS_TAG "SwarmType1RosterEntry"

    virtual QString getClassTag() { return SwarmType1RosterEntry_CLASS_TAG; }
    virtual QString getMapIdQString();
    virtual void save(QTextStream& out, CUnsentChatMessageStorage& offlineMessagesStorage);

    static AbstractRosterEntry* loadRosterEntry(
            QTextStream& in, CUnsentChatMessageStorage& mUnsentMessageStorage, CUserManager& userManager, CCore& chatCore);

private:
    SwarmType1& swarm;
};

#endif // SWARMTYPE1ROSTERENTRY_H
