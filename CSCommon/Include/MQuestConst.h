#pragma once

#define MAX_QL			5			
#define MAX_MAPSET		6
#define MAX_SCENARIO_SACRI_ITEM			2
#define MAX_SCENARIO_REWARD_ITEM		3		
#define SCENARIO_STANDARD_DICE_SIDES	6		
#define MAX_SECTOR_LINK		10		
#define MAX_SPAWN_COUNT		20

enum MQuestNPCSpawnType
{
	MNST_MELEE = 0,
	MNST_RANGE,
	MNST_BOSS,
	MNST_END
};

#define SAME_SPAWN_DELAY_TIME			2000
#define QUEST_DYNAMIC_WORLDITEM_LIFETIME	10000
#define QUEST_WORLDITEM_ITEMBOX_ID			51
#define MAX_SKILL	4
#define PORTAL_MOVING_TIME				30000
#define QUEST_COMBAT_PLAY_START_DELAY	7000
#define QUEST_COMPLETE_DELAY	7000

enum MQuestCombatState
{
	MQUEST_COMBAT_NONE		= 0,
	MQUEST_COMBAT_PREPARE	= 1,
	MQUEST_COMBAT_PLAY		= 2,	
	MQUEST_COMBAT_COMPLETED	= 3
};

enum MQuestItemType
{
	MMQIT_PAGE = 1,
	MMQIT_SKULL,
	MMQIT_FRESH,
	MMQIT_RING,
	MMQIT_NECKLACE,
	MMQIT_DOLL,
	MMQIT_BOOK,
	MMQIT_OBJECT,
	MMQIT_SWORD,
	MMQIT_GUN,
	MMQIT_LETTER,
	MMQIT_ITEMBOX,
	MMQIT_MONBIBLE,

	MMQIT_END,
};

#define MIN_QUEST_ITEM_ID		200001

#define MIN_QUEST_DB_ITEM_COUNT	1
#define MAX_QUEST_DB_ITEM_COUNT	100

#define MIN_QUEST_ITEM_COUNT	0	
#define MAX_QUEST_ITEM_COUNT	99

#define MINID_QITEM_LIMIT		200001
#define MAXID_QITEM_LIMIT		200256
#define MINID_MONBIBLE_LIMIT	210001
#define MAXID_MONBIBLE_LIMIT	220000

#define	MAX_PLAY_COUNT				10
#define	MAX_SHOP_TRADE_COUNT		20
#define	MAX_ELAPSE_TIME				(1000 * 60 * 30)
#define MAX_REWARD_COUNT			10
#define MAX_QUSET_PLAYER_COUNT		4

#define MAX_SACRIFICE_SLOT_COUNT 2

#define MAX_DB_QUEST_ITEM_SIZE		256
#define MAX_DB_MONSTERBIBLE_SIZE	32
#define MAX_DB_QUEST_BINARY_SIZE	292
#define QUEST_DATA					293

#define ITEM_TYPE_NOT_SACRIFICE			-2
#define NEED_MORE_QUEST_ITEM			-4
#define SACRIFICE_ITEM_DUPLICATED		-5
#define ERR_SACRIFICE_ITEM_INFO			-255

#define MSQITRES_NOR  1
#define MSQITRES_SPC  2
#define MSQITRES_INV  3
#define MSQITRES_DUP  4
#define MSQITRES_EMP  5
#define MSQITRES_ERR -1

#define MSMB_UNKNOW		0
#define MSMB_KNOW		1
#define MSMB_NEWINFO	2