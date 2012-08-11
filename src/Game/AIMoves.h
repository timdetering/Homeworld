#ifndef __AIMOVES_H
#define __AIMOVES_H

#include "vector.h"
#include "volume.h"

/*=============================================================================
    Move Definitions:
=============================================================================*/
//moveto types
#define TIME_LIMITED        0
#define DISTANCE_LIMITED    1

/*=============================================================================
    Utility Functions:
=============================================================================*/
void aimInsertMove(struct AITeam *team, struct AITeamMove *move);

/*=============================================================================
    Move Process Functions:
=============================================================================*/
sdword aimProcessVarSet(struct AITeam *team);
sdword aimProcessVarInc(struct AITeam *team);
sdword aimProcessVarDec(struct AITeam *team);
sdword aimProcessVarWait(struct AITeam *team);
sdword aimProcessVarDestroy(struct AITeam *team);
sdword aimProcessGuardShips(struct AITeam *team);
sdword aimProcessFormation(struct AITeam *team);
sdword aimProcessGetShips(struct AITeam *team);
sdword aimProcessMoveDone(struct AITeam *team);
sdword aimProcessSpecial(struct AITeam *team);
sdword aimProcessAttack(struct AITeam *team);
sdword aimProcessAdvancedAttack(struct AITeam *team);
sdword aimProcessMoveAttack(struct AITeam *team);
sdword aimProcessMoveTeam(struct AITeam *team);
sdword aimProcessIntercept(struct AITeam *team);
sdword aimProcessMoveTo(struct AITeam *team);
sdword aimProcessMoveSplit(struct AITeam *team);
sdword aimProcessCountShips(struct AITeam *team);
sdword aimProcessHarassAttack(struct AITeam *team);
sdword aimProcessFancyGetShips(struct AITeam *team);
sdword aimProcessGuardCooperatingTeam(struct AITeam *team);
sdword aimProcessDefendMothership(struct AITeam *team);
sdword aimProcessPatrolMove(struct AITeam *team);
sdword aimProcessActivePatrol(struct AITeam *team);
sdword aimProcessTempGuard(struct AITeam *team);
sdword aimProcessSupport(struct AITeam *team);
sdword aimProcessSwarmAttack(struct AITeam *team);
sdword aimProcessLaunch(struct AITeam *team);
sdword aimProcessResourceVolume(struct AITeam *team);
sdword aimProcessCapture(struct AITeam *team);
sdword aimProcessActiveCapture(struct AITeam *team);
sdword aimProcessActiveMine(struct AITeam *team);
sdword aimProcessMineVolume(struct AITeam *team);
sdword aimProcessSpecialDefense(struct AITeam *team);
sdword aimProcessKamikaze(struct AITeam *team);

/*=============================================================================
    Move Creation Functions:
=============================================================================*/
AITeamMove *aimCreateVarSet(struct AITeam *team, char *varName, sdword value, bool8 wait, bool8 remove);
AITeamMove *aimCreateVarInc(struct AITeam *team, char *varName, bool8 wait, bool8 remove);
AITeamMove *aimCreateVarDec(struct AITeam *team, char *varName, bool8 wait, bool8 remove);
AITeamMove *aimCreateVarWait(struct AITeam *team, char *varName, sdword value, bool8 wait, bool8 remove);
AITeamMove *aimCreateVarDestroy(struct AITeam *team, char *varName, bool8 wait, bool8 remove);
AITeamMove *aimCreateGuardShips(struct AITeam *team, SelectCommand *ships, bool8 wait, bool8 remove);
AITeamMove *aimCreateFormation(struct AITeam *team, TypeOfFormation formationtype, bool8 wait, bool8 remove);
AITeamMove *aimCreateGetShips(struct AITeam *team, ShipType shiptype, sbyte num_ships, sdword priority, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveDone(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateSpecial(struct AITeam *team, SelectCommand *targets, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateAttack(struct AITeam *team, SelectCommand *targets, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateAdvancedAttack(struct AITeam *team, SelectCommand *targets, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateFlankAttack(struct AITeam *team, SelectCommand *targets, bool8 hyperspace, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveAttack(struct AITeam *team, SelectCommand *targets, bool Advanced, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeam(struct AITeam *team, vector destination, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeamIndex(struct AITeam *team, vector destination, udword index, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeamSplit(struct AITeam *team, SelectCommand *ships, Path *destinations, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateHyperspace(struct AITeam *team, vector destination, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateIntercept(struct AITeam *team, ShipPtr ship, real32 interval, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTo(struct AITeam *team, vector destination, real32 limiter, udword type, TypeOfFormation formation, TacticsType tactics, bool wait, bool remove);
AITeamMove *aimCreateCountShips(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateHarassAttack(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateFancyGetShips(struct AITeam *team, ShipType shiptype, sbyte num_ships, AlternativeShips *alternatives, sdword priority, bool8 wait, bool8 remove);
AITeamMove *aimCreateDock(struct AITeam *team, sdword dockmoveFlags, ShipPtr dockAt, bool8 wait, bool8 remove);
AITeamMove *aimCreateLaunch(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateGuardCooperatingTeam(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateDefendMothership(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreatePatrolMove(struct AITeam *team, Path *path, udword startIndex, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateActivePatrol(struct AITeam *team, udword patroltype, bool8 wait, bool8 remove);
AITeamMove *aimCreateTempGuard(struct AITeam *team, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateReinforce(struct AITeam *team, struct AITeam *reinforceteam, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateSupport(struct AITeam *team, SelectCommand *ships, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveRecon(struct AITeam *team, bool EnemyRecon, TypeOfFormation formation,TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateShipRecon(struct AITeam *team, SelectCommand *ships, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateArmada(struct AITeam *team, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateControlResources(struct AITeam *team, SelectCommand *ships, bool8 wait, bool8 remove);
AITeamMove *aimCreateSwarmAttack(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateSwarmDefense(struct AITeam *team, SelectCommand *pods, bool8 wait, bool8 remove);
AITeamMove *aimCreateSwarmPod(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateResourceVolume(struct AITeam *team, Volume volume, bool8 strictVolume, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveResource(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateMothershipMove(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateCapture(struct AITeam *team, ShipPtr ship, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveCapture(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveMine(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateMineVolume(struct AITeam *team, Volume volume, bool8 wait, bool8 remove);
AITeamMove *aimCreateSpecialDefense(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateDeleteTeam(struct AITeam *team);
AITeamMove *aimCreateKamikaze(struct AITeam *team, SelectCommand *targets,TypeOfFormation formation, bool8 wait, bool8 remove);

/*=============================================================================
    Move Creation Without Linked List Add:
=============================================================================*/
AITeamMove *aimCreateFormationNoAdd(struct AITeam *team, TypeOfFormation formationtype, bool8 wait, bool8 remove);
AITeamMove *aimCreateFancyGetShipsNoAdd(struct AITeam *team, ShipType shiptype, sbyte num_ships, AlternativeShips *alternatives, sdword priority, bool8 wait, bool8 remove);
AITeamMove *aimCreateSpecialNoAdd(struct AITeam *team, SelectCommand *targets, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateAttackNoAdd(struct AITeam *team, SelectCommand *targets, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateAdvancedAttackNoAdd(struct AITeam *team, SelectCommand *target, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateFlankAttackNoAdd(struct AITeam *team, SelectCommand *targets, bool8 hyperspace, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveAttackNoAdd(struct AITeam *team, SelectCommand *targets, bool Advanced, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeamNoAdd(struct AITeam *team, vector destination, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeamIndexNoAdd(struct AITeam *team, vector destination, udword index, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveTeamSplitNoAdd(struct AITeam *team, SelectCommand *ships, Path *destinations, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateHyperspaceNoAdd(struct AITeam *team, vector destination, TypeOfFormation formation, bool8 wait, bool8 remove);
AITeamMove *aimCreateInterceptNoAdd(struct AITeam *team, ShipPtr ship, real32 interval, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateMoveToNoAdd(struct AITeam *team, vector destination, real32 limiter, udword type, TypeOfFormation formation, TacticsType tactics, bool wait, bool remove);
AITeamMove *aimCreateCountShipsNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateDockNoAdd(struct AITeam *team, sdword dockmoveFlags, ShipPtr dockAt, bool8 wait, bool8 remove);
AITeamMove *aimCreateLaunchNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateGuardCooperatingTeamNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateDefendMothershipNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreatePatrolMoveNoAdd(struct AITeam *team, Path *path, udword startIndex, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateActivePatrolNoAdd(struct AITeam *team, udword patroltype, bool8 wait, bool8 remove);
AITeamMove *aimCreateGetShipsNoAdd(struct AITeam *team, ShipType shiptype, sbyte num_ships, sdword priority, bool8 wait, bool8 remove);
AITeamMove *aimCreateTempGuardNoAdd(struct AITeam *team, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateReinforceNoAdd(struct AITeam *team, struct AITeam *reinforceteam, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateSupportNoAdd(struct AITeam *team, SelectCommand *ships, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveReconNoAdd(struct AITeam *team, bool EnemyRecon, TypeOfFormation formation,TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateShipReconNoAdd(struct AITeam *team, SelectCommand *ships, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateArmadaNoAdd(struct AITeam *team, TypeOfFormation formation, TacticsType tactics, bool8 wait, bool8 remove);
AITeamMove *aimCreateControlResourcesNoAdd(struct AITeam *team, SelectCommand *ships, bool8 wait, bool8 remove);
AITeamMove *aimCreateSwarmAttackNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateSwarmDefenseNoAdd(struct AITeam *team, SelectCommand *pods, bool8 wait, bool8 remove);
AITeamMove *aimCreateResourceVolumeNoAdd(struct AITeam *team, Volume volume, bool8 strictVolume, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveResourceNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateMothershipMove(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateCaptureNoAdd(struct AITeam *team, ShipPtr ship, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveCaptureNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateActiveMineNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateMineVolumeNoAdd(struct AITeam *team, Volume vol, bool8 wait, bool8 remove);
AITeamMove *aimCreateSpecialDefenseNoAdd(struct AITeam *team, bool8 wait, bool8 remove);
AITeamMove *aimCreateDeleteTeamNoAdd(struct AITeam *team);
AITeamMove *aimCreateKamikazeNoAdd(struct AITeam *team, SelectCommand *targets,TypeOfFormation formation, bool8 wait, bool8 remove);

/*=============================================================================
    Save Move Functions
=============================================================================*/

void aimFix_MoveDone(AITeamMove *move);
void aimFix_GuardShips(AITeamMove *move);
void aimFix_DefMoship(AITeamMove *move);
void aimFix_TempGuard(AITeamMove *move);
void aimFix_GetShips(AITeamMove *move);
void aimFix_Formation(AITeamMove *move);
void aimFix_MoveTeam(AITeamMove *move);
void aimFix_MoveTeamIndex(AITeamMove *move);
void aimFix_MoveTeamSplit(AITeamMove *move);
void aimFix_Hyperspace(AITeamMove *move);
void aimFix_Intercept(AITeamMove *move);
void aimFix_MoveTo(AITeamMove *move);
void aimFix_PatrolMove(AITeamMove *move);
void aimFix_ActivePatrol(AITeamMove *move);
void aimFix_ActiveRecon(AITeamMove *move);
void aimFix_ShipRecon(AITeamMove *move);
void aimFix_CountShips(AITeamMove *move);
void aimFix_Special(AITeamMove *move);
void aimFix_Attack(AITeamMove *move);
void aimFix_AdvancedAttack(AITeamMove *move);
void aimFix_FlankAttack(AITeamMove *move);
void aimFix_MoveAttack(AITeamMove *move);
void aimFix_HarassAttack(AITeamMove *move);
void aimFix_FancyGetShips(AITeamMove *move);
void aimFix_Dock(AITeamMove *move);
void aimFix_Launch(AITeamMove *move);
void aimFix_Reinforce(AITeamMove *move);
void aimFix_VarSet(AITeamMove *move);
void aimFix_VarInc(AITeamMove *move);
void aimFix_VarDec(AITeamMove *move);
void aimFix_VarWait(AITeamMove *move);
void aimFix_VarDestroy(AITeamMove *move);
void aimFix_GuardCoopTeam(AITeamMove *move);
void aimFix_Support(AITeamMove *move);
void aimFix_Armada(AITeamMove *move);
void aimFix_ControlResources(AITeamMove *move);
void aimFix_SwarmAttack(AITeamMove *move);
void aimFix_SwarmDefense(AITeamMove *move);
void aimFix_SwarmPod(AITeamMove *move);
void aimFix_ResourceVolume(AITeamMove *move);
void aimFix_DeleteTeam(AITeamMove *move);
void aimFix_Capture(AITeamMove *move);
void aimFix_ActiveCapture(AITeamMove *move);
void aimFix_ActiveMine(AITeamMove *move);
void aimFix_MineVolume(AITeamMove *move);
void aimFix_SpecialDefense(AITeamMove *move);
void aimFix_ActiveResource(AITeamMove *move);
void aimFix_MothershipMove(AITeamMove *move);
void aimFix_Kamikaze(AITeamMove *move);

void aimLoad_GuardShips(AITeamMove *move);
void aimLoad_DefMoship(AITeamMove *move);
void aimLoad_PatrolMove(AITeamMove *move);
void aimLoad_MoveTeamSplit(AITeamMove *move);
void aimLoad_Special(AITeamMove *move);
void aimLoad_Attack(AITeamMove *move);
void aimLoad_AdvancedAttack(AITeamMove *move);
void aimLoad_FlankAttack(AITeamMove *move);
void aimLoad_MoveAttack(AITeamMove *move);
void aimLoad_Dock(AITeamMove *move);
void aimLoad_Support(AITeamMove *move);
void aimLoad_ShipRecon(AITeamMove *move);
void aimLoad_ControlResources(AITeamMove *move);
void aimLoad_SwarmAttack(AITeamMove *move);
void aimLoad_SwarmDefense(AITeamMove *move);
void aimLoad_ResourceVolume(AITeamMove *move);
void aimLoad_Kamikaze(AITeamMove *move);

void aimSave_GuardShips(AITeamMove *move);
void aimSave_DefMoship(AITeamMove *move);
void aimSave_PatrolMove(AITeamMove *move);
void aimSave_MoveTeamSplit(AITeamMove *move);
void aimSave_Special(AITeamMove *move);
void aimSave_Attack(AITeamMove *move);
void aimSave_AdvancedAttack(AITeamMove *move);
void aimSave_FlankAttack(AITeamMove *move);
void aimSave_MoveAttack(AITeamMove *move);
void aimSave_Dock(AITeamMove *move);
void aimSave_Support(AITeamMove *move);
void aimSave_ShipRecon(AITeamMove *move);
void aimSave_ControlResources(AITeamMove *move);
void aimSave_SwarmAttack(AITeamMove *move);
void aimSave_SwarmDefense(AITeamMove *move);
void aimSave_ResourceVolume(AITeamMove *move);
void aimSave_Kamikaze(AITeamMove *move);

void aimPreFix_Dock(AITeamMove *move);
void aimPreFix_GetShips(AITeamMove *move);
void aimPreFix_Intercept(AITeamMove *move);
void aimPreFix_PatrolMove(AITeamMove *move);
void aimPreFix_AdvancedAttack(AITeamMove *move);
void aimPreFix_MoveAttack(AITeamMove *move);
void aimPreFix_HarassAttack(AITeamMove *move);
void aimPreFix_FancyGetShips(AITeamMove *move);
void aimPreFix_Reinforce(AITeamMove *move);

#endif
