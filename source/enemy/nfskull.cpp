/*=========================================================================

	nffolk.cpp

	Author:		CRB
	Created: 
	Project:	Spongebob
	Purpose: 

	Copyright (c) 2000 Climax Development Ltd

===========================================================================*/

#ifndef __ENEMY_NPC_H__
#include "enemy\npc.h"
#endif

#ifndef	__PLAYER_PLAYER_H__
#include "player\player.h"
#endif

#ifndef __GAME_GAME_H__
#include "game\game.h"
#endif


void CNpc::processCloseFlamingSkullAttack( int _frames )
{
	s32 distX, distY;
	s32 distXSqr, distYSqr;

	if ( m_state == FLAMING_SKULL_ATTACK )
	{
		processGenericGetUserDist( _frames, &distX, &distY );

		distXSqr = distX * distX;
		distYSqr = distY * distY;

		if ( distXSqr + distYSqr < 400 )
		{
			m_state = FLAMING_SKULL_RETURN;
		}
		else
		{
			processGenericGotoTarget( _frames, distX, distY, m_data[m_type].speed );
		}
	}
	else
	{
		distX = m_base.vx - Pos.vx;
		distY = m_base.vy - Pos.vy;

		distXSqr = distX * distX;
		distYSqr = distY * distY;

		if ( distXSqr + distYSqr < 100 )
		{
			m_state = FLAMING_SKULL_ATTACK;
			m_heading = m_fireHeading;

			m_controlFunc = NPC_CONTROL_MOVEMENT;
			m_timerFunc = NPC_TIMER_ATTACK_DONE;
			m_timerTimer = GameState::getOneSecondInFrames();
			m_sensorFunc = NPC_SENSOR_NONE;
		}
		else
		{
			processGenericGotoTarget( _frames, distX, distY, m_data[m_type].speed );
		}
	}
}