/*********************/
/*** FX Base Class ***/
/*********************/

#include 	"system\global.h"
#include	<DStructs.h>
#include 	"utils\utils.h"
#include 	"gfx\prim.h"
#include	"gfx\sprbank.h"
#include	<sprites.h>
#include	"level\level.h"
#include	"gfx\otpos.h"

#include	"FX\FX.h"
#include	"FX\FXjfish.h"
#include	"FX\FXfallingTile.h"
#include	"FX\FXCloud.h"
#include	"FX\FXSteam.h"
/* FX

	Jellyfish legs
	Bubbles (inc acid)
	Electricity lightning bolt
	Electricity sheet lightning
	Electricity Blast
	Electricity Radial?
	Electricity projectile

	Shockwave - From falling items
	Daze stars

	water/acid/lava/oil
		drip
		splashes


	water/acid/lava.oil
		drops
		waterfall 
		waterfall end (splash)

	fireballs

	steam
	smoke
	flames
	marsh gas

	explosions (implode!!)

	Coral debris

***************************
Level Effect Emitters

	Bubble 
	Acid drip 
	Acid Flow
	steam
	smoke
	fireballs
	flames
	gas

*/

/*****************************************************************************/
CFX		*CFX::Create(const FX_TYPE Type)
{
CFX		*NewFX;

		switch(Type)
		{
		case FX_TYPE_FALLINGTILE:
			NewFX=new ("Falling Tile") CFXFallingTile();
			break;
		case FX_TYPE_CLOUD:
			NewFX=new ("Cloud ") CFXCloud();
			break;
			case FX_TYPE_STEAM:
			NewFX=new ("Steam") CFXSteam();
			break;

		case FX_TYPE_JELLYFISH_LEGS:
//			NewFX=new ("JellyFish Legs") CFXJellyFishLegs();
			ASSERT(!"FISH LEGS OUT OF STOCK\n");
		case FX_TYPE_BUBBLE:
			case FX_TYPE_BUBBLE_WATER:
			case FX_TYPE_BUBBLE_ACID:
			case FX_TYPE_BUBBLE_LAVA:
			case FX_TYPE_BUBBLE_OIL:
		case FX_TYPE_LIGHTNING_BOLT:
		case FX_TYPE_LIGHTNING_SHEET:
		case FX_TYPE_LIGHTNING_BLAST:
		case FX_TYPE_LIGHTNING_RADIAL:
		case FX_TYPE_LIGHTNING_PROJECTILE:
		case FX_TYPE_SHOCKWAVE:
		case FX_TYPE_DAZE:
		case FX_TYPE_DROP:			
			case FX_TYPE_DROP_WATER:
			case FX_TYPE_DROP_ACID:
			case FX_TYPE_DROP_LAVA:
			case FX_TYPE_DROP_OIL:
		case FX_TYPE_SPLASH:
			case FX_TYPE_SPLASH_WATER:
			case FX_TYPE_SPLASH_ACID:
			case FX_TYPE_SPLASH_LAVA:
			case FX_TYPE_SPLASH_OIL:
		case FX_TYPE_CASCADE:		
		case FX_TYPE_CASCADE_SPLASH:	
		case FX_TYPE_FIREBALL:
			case FX_TYPE_CLOUD_SMOKE:
			case FX_TYPE_CLOUD_GAS:
		case FX_TYPE_FLAMES:
		case FX_TYPE_EXPLODE:
		case FX_TYPE_DEBRIS:
		
		default:
			ASSERT(!"UNKNOWN FX TYPE");
			return NULL;
	}

	return NewFX;
}

/*****************************************************************************/
CFX		*CFX::Create(const FX_TYPE Type,CThing *Parent)
{
CFX		*NewFX=CFX::Create(Type);

		ASSERT(Parent);

		NewFX->init(Parent->getPos());
		Parent->addChild(NewFX);

		return NewFX;
}

/*****************************************************************************/
CFX		*CFX::Create(const FX_TYPE Type,DVECTOR const &Pos)
{
CFX		*NewFX=CFX::Create(Type);

		NewFX->init(Pos);

		return NewFX;
}

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
void	CFX::init()
{
		CFXThing::init();

		m_spriteBank=new ("FX Sprite") SpriteBank();
		m_spriteBank->load(SPRITES_SPRITES_SPR);
		OtPos=OTPOS__ACTOR_POS;
}

/*****************************************************************************/
void	CFX::shutdown()
{
		m_spriteBank->dump();	delete m_spriteBank;
		CFXThing::shutdown();
}

/*****************************************************************************/
void	CFX::think(int _frames)
{
		CFXThing::think(_frames);
}

/*****************************************************************************/
void	CFX::render()
{
		CFXThing::render();
}

