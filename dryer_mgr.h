/*************************************************
* Author:				CLH
* Customer:			GA Braun
* Date Created: 01-28-2019
* Major Rev:		1
* Minor Rev:		11
* Date Modified:
*
*************************************************/

#include "cls_sm.h"
#include "lint_mgr.h"
#include "dry_mgr.h"
#include "cool_mgr.h"


typedef struct{
	DRYER_MGR_CONFIG_typ 	Config;
	DRYER_MGR_IO_typ			IO;
	DRYER_MGR_CMDS_typ		Cmds;
	DRYER_MGR_STATUS_typ	Status;
}DRYER_MGR_TYP;

_GLOBAL DRYER_MGR_typ	DryerMgr_PUB;
