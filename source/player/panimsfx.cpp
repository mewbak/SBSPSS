/*=========================================================================

	panimsfx.cpp

	Author:		PKG
	Created: 
	Project:	Spongebob
	Purpose:	Handles automatically generated sound effects based upon anim frames
				NB: DON'T FORGET TO CHANGE s_numAnimSfx!!!!!!!

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

/*----------------------------------------------------------------------
	Includes
	-------- */

#include "player\player.h"


/*	Std Lib
	------- */

/*	Data
	---- */

#ifndef	__ANIM_SPONGEBOB_HEADER__
#include <ACTOR_SPONGEBOB_ANIM.h>
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


// ANIM_SPONGEBOB_BALLOONJUMP
static const CPlayer::AnimFrameSfx s_balloonJumpSfx[]=
{
	{	65,		CSoundMediator::SFX_SPONGEBOB_BLINK,			},
	{	128,	CSoundMediator::SFX_SPONGEBOB_BLINK,			},
};
static const int	s_balloonJumpCount=sizeof(s_balloonJumpSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_BLOWBUBBLE
static const CPlayer::AnimFrameSfx s_blowBubbleSfx[]=
{
	{	11,		CSoundMediator::SFX_BUBBLE_WAND,				},
};
static const int	s_blowBubbleCount=sizeof(s_blowBubbleSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_PLAYER_ANIM_BUTTBOUNCEEND
static const CPlayer::AnimFrameSfx s_buttBounceEndSfx[]=
{
	{	1,		CSoundMediator::SFX_SPONGEBOB_BUTTBOUNCE,		},
};
static const int	s_buttBounceEndCount=sizeof(s_buttBounceEndSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_HITGROUND
static const CPlayer::AnimFrameSfx s_hitGroundSfx[]=
{
	{	8,		CSoundMediator::SFX_SPONGEBOB_LAND_AFTER_FALL,	},
	{	14,		CSoundMediator::SFX_SPONGEBOB_LAND_AFTER_FALL,	},
};
static const int	s_hitGroundCount=sizeof(s_hitGroundSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_PLAYER_ANIM_JUMPEND
static const CPlayer::AnimFrameSfx s_jumpEndSfx[]=
{
	{	5,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	7,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
};
static const int	s_jumpEndCount=sizeof(s_jumpEndSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_PLAYER_ANIM_KARATE
static const CPlayer::AnimFrameSfx s_karateSfx[]=
{
	{	13,		CSoundMediator::SFX_SPONGEBOB_KARATE_1			},
};
static const int	s_karateCount=sizeof(s_karateSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_PLAYER_ANIM_RUN
static const CPlayer::AnimFrameSfx s_runSfx[]=
{
	{	3,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	11,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	19,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	27,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	35,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	43,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	51,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	59,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	67,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	75,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	77,		CSoundMediator::SFX_SPONGEBOB_BLINK				},
};
static const int	s_runCount=sizeof(s_runSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_PLAYER_ANIM_RUNSTOP
static const CPlayer::AnimFrameSfx s_runStopSfx[]=
{
	{	5,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	6,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
};
static const int	s_runStopCount=sizeof(s_runStopSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_WALK
static const CPlayer::AnimFrameSfx s_walkSfx[]=
{
	{	4,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	8,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	12,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	20,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	24,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	28,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	36,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	40,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	44,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	52,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	56,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	60,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
	{	62,		CSoundMediator::SFX_SPONGEBOB_BLINK				},
};
static const int	s_walkCount=sizeof(s_walkSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_SWIPE
static const CPlayer::AnimFrameSfx s_swipeSfx[]=
{
	{	8,		CSoundMediator::SFX_SPONGEBOB_NET,				},
	{	10,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	16,		CSoundMediator::SFX_SPONGEBOB_WALK_1			},
	{	17,		CSoundMediator::SFX_SPONGEBOB_WALK_2			},
};
static const int	s_swipeCount=sizeof(s_swipeSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_IDLEBIGEYE
static const CPlayer::AnimFrameSfx s_idleBigEyeSfx[]=
{
	{	99,		CSoundMediator::SFX_SPONGEBOB_BLINK,			},
};
static const int	s_idleBigEyeCount=sizeof(s_idleBigEyeSfx)/sizeof(CPlayer::AnimFrameSfx);

// ANIM_SPONGEBOB_IDLEFACEUPSIDEDOWN
static const CPlayer::AnimFrameSfx s_idleFaceUpsideDownSfx[]=
{
	{	98,		CSoundMediator::SFX_SPONGEBOB_BLINK,			},
};
static const int	s_idleFaceUpsideDownCount=sizeof(s_idleFaceUpsideDownSfx)/sizeof(CPlayer::AnimFrameSfx);



// This is the table that ties up anims to sfx
const CPlayer::AnimSfx CPlayer::s_animSfx[]=
{
	{	ANIM_SPONGEBOB_BALLOONJUMP,			s_balloonJumpCount,			s_balloonJumpSfx		},
	{	ANIM_SPONGEBOB_BLOWBUBBLE,			s_blowBubbleCount,			s_blowBubbleSfx			},
	{	ANIM_SPONGEBOB_BUTTBOUNCEEND,		s_buttBounceEndCount,		s_buttBounceEndSfx		},
	{	ANIM_SPONGEBOB_HITGROUND,			s_hitGroundCount,			s_hitGroundSfx			},
	{	ANIM_SPONGEBOB_JUMPEND,				s_jumpEndCount,				s_jumpEndSfx			},
	{	ANIM_SPONGEBOB_KARATE,				s_karateCount,				s_karateSfx				},
	{	ANIM_SPONGEBOB_RUN,					s_runCount,					s_runSfx				},
	{	ANIM_SPONGEBOB_RUNSTOP,				s_runStopCount,				s_runStopSfx			},
	{	ANIM_SPONGEBOB_WALK,				s_walkCount,				s_walkSfx				},
	{	ANIM_SPONGEBOB_SWIPE,				s_swipeCount,				s_swipeSfx				},
//NOIDLE	{	ANIM_SPONGEBOB_IDLEBIGEYE,			s_idleBigEyeCount,			s_idleBigEyeSfx			},
//NOIDLE	{	ANIM_SPONGEBOB_IDLEFACEUPSIDEDOWN,	s_idleFaceUpsideDownCount,	s_idleFaceUpsideDownSfx	},
};
const int				CPlayer::s_numAnimSfx=10;		// Grrrrrrrr! (pkg)

 
/*===========================================================================
end */
