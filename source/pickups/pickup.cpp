/*=========================================================================

	pickup.cpp

	Author:		PKG
	Created: 
	Project:	Spongebob
	Purpose: 

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

/*----------------------------------------------------------------------
	Includes
	-------- */

#ifndef __GFX_SPRBANK_H__
#include "gfx\sprbank.h"	// Damnit.. include order! :( (pkg)
#endif

#include "pickups\pickup.h"

#ifndef __LEVEL_LEVEL_H__
#include "level\level.h"
#endif

// For the factory..

#ifndef	__PICKUPS_PHEALTH_H__
#include "pickups\phealth.h"
#endif

#ifndef	__PICKUPS_PLIFE_H__
#include "pickups\plife.h"
#endif

#ifndef	__PICKUPS_PSPATULA_H__
#include "pickups\pspatula.h"
#endif

#ifndef	__PICKUPS_PJLAMMO_H__
#include "pickups\pjlammo.h"
#endif

#ifndef	__PICKUPS_PBUBMIX_H__
#include "pickups\pbubmix.h"
#endif

#ifndef	__PICKUPS_PGLASSES_H__
#include "pickups\pglasses.h"
#endif

#ifndef	__PICKUPS_PSHOES_H__
#include "pickups\pshoes.h"
#endif

#ifndef	__PICKUPS_PQUEST_H__
#include "pickups\pquest.h"
#endif


/*	Std Lib
	------- */

/*	Data
	---- */

#ifndef __SPR_INGAMEFX_H__
#include <ingamefx.h>
#endif


/*----------------------------------------------------------------------
	Tyepdefs && Defines
	------------------- */

/*----------------------------------------------------------------------
	Structure defintions
	-------------------- */

/*----------------------------------------------------------------------
	Function Prototypes
	------------------- */

/*----------------------------------------------------------------------
	Vars
	---- */

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::init()
{
	CThing::init();

	m_spriteBank=new ("pickup sprite") SpriteBank();
	m_spriteBank->load(INGAMEFX_INGAMEFX_SPR);
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::shutdown()
{
	m_spriteBank->dump();	delete m_spriteBank;
	CThing::shutdown();
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::think(int _frames)
{
	CThing::think(_frames);
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::render()
{
	/*
	DVECTOR	ofs;
	int		x,y;

	ofs=getRenderOffset();
	x=Pos.vx-ofs.vx;
	y=Pos.vy-ofs.vy;
	DrawLine(x-15,y-15,x+15,y+15,255,255,255,0);
	DrawLine(x+15,y-15,x-15,y+15,255,255,255,0);
	*/
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::setPos(const DVECTOR *_pos)
{
	Pos=*_pos;
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
void	CBasePickup::collect(class CPlayer *_player)
{
	shutdown();
	delete this;
}

/*----------------------------------------------------------------------
	Function:
	Purpose:
	Params:
	Returns:
  ---------------------------------------------------------------------- */
DVECTOR	CBasePickup::getRenderOffset()
{
	return CLevel::getCameraPos();
}




/*----------------------------------------------------------------------
	Function:
	Purpose:	This is basically a factory method for making pickups :)
	Params:
	Returns:
  ---------------------------------------------------------------------- */
CBasePickup	*createPickup(const PICKUP_TYPE _type,const DVECTOR *_pos)
{
	CBasePickup	*pickup;

	switch(_type)
	{
		case PICKUP__100_PERCENT_LIFE:
			pickup=new ("100HealthPickup") C100HealthPickup();
			break;
		case PICKUP__50_PERCENT_LIFE:
			pickup=new ("15HealthPickup") C50HealthPickup();
			break;
		case PICKUP__25_PERCENT_LIFE:
			pickup=new ("25HealthPickup") C25HealthPickup();
			break;

		case PICKUP__LIFE:
			pickup=new ("LifePickup") CLifePickup();
			break;

		case PICKUP__SPATULA:
			pickup=new ("SpatulaPickup") CSpatulaPickup();
			break;

		case PICKUP__JELLY_LAUNCHER_AMMO:
			pickup=new ("JellyLauncherAmmoPickup") CJellyLauncherAmmoPickup();
			break;

		case PICKUP__BUBBLE_MIXTURE:
			pickup=new ("BubbleAmmoPickup") CBubbleMixturePickup();
			break;

		case PICKUP__GLASSES:
			pickup=new ("GlassesPickup") CGlassesPickup();
			break;

		case PICKUP__SQUEAKY_SHOES:
			pickup=new ("ShoesPickup") CShoesPickup();
			break;

		case PICKUP__QUEST_ITEM__TEST:
			pickup=new ("QuestItemPickup") CTestQuestItemPickup();
			break;

		default:
			ASSERT(!"UNKNOWN PICKUP TYPE");
			pickup=new ("Pickup") CBasePickup();
			break;
	}

	pickup->init();
	pickup->setPos(_pos);

	return pickup;
}

/*===========================================================================
end */
