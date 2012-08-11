/*=============================================================================
    Name    : AIHandler.h
    Purpose : Header file for AIHandler.c

    Created 6/19/1998 by fpoiker
    Copyright Relic Entertainment, Inc.  All rights reserved.
=============================================================================*/
#ifndef ___AIHANDLER_H
#define ___AIHANDLER_H

#include "AITeam.h"
#include "select.h"

#define GENERIC_STRENGTHRATIO   1.5

/*=============================================================================
    Function Prototypes:
=============================================================================*/
void aihGenericEmptyFuelHandler(struct AITeam *team);
void aihSwarmerEmptyFuelHandler(struct AITeam *team);
void aihGenericFuelLowHandler(struct AITeam *team);
void aihHarassNumbersLowHandler(struct AITeam *team);
void aihHarassFiringSingleShipHandler(struct AITeam *team);
void aihHarassDisengageSingleShipHandler(struct AITeam *team);
void aihKamikazeHealthLowHandler(struct AITeam *team);
void aihFastDefenseNumbersLowHandler(struct AITeam *team);
void aihSlowDefenseNumbersLowHandler(struct AITeam *team);
void aihGenericGettingRockedHandler(struct AITeam *team, SelectCommand *ships);
void aihPatrolEnemyNearbyHandler(struct AITeam *team, SelectCommand *ships);
void aihGravWellEnemyNearbyHandler(struct AITeam *team, SelectCommand *ships);
void aihGravWellEnemyNotNearbyHandler(struct AITeam *team);
void aihFastDefenseDistressHandler(struct AITeam *team, udword *intvar);
void aihSlowDefenseDistressHandler(struct AITeam *team, udword *intvar);

//team died handlers
void aihFastDefenseTeamDiedHandler(struct AITeam *team);
void aihSlowDefenseTeamDiedHandler(struct AITeam *team);
void aihGuardShipsTeamDiedHandler(struct AITeam *team);
void aihReconaissanceTeamDiedHandler(struct AITeam *team);
void aihReconShipTeamDiedHandler(struct AITeam *team);
void aihHarassTeamDiedHandler(struct AITeam *team);
void aihPatrolTeamDiedHandler(struct AITeam *team);
void aihRemoveTeamDiedHandler(struct AITeam *team);


#endif
