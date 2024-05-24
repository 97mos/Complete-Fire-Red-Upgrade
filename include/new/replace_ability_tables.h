#pragma once

#include "../global.h"

/**
 * \file replace_ability_tables.h
 * \brief can change ability name, description, and even effect.
 * \for Species included in them
 */


struct SpecialReplaceAbilityFlags
{
	bool8 gSpeciesHasTurboblaze : 1;
	bool8 gSpeciesHasTeravolt : 1;
	bool8 gSpeciesHasDrillBeak : 1;
	bool8 gSpeciesHasGrassDash : 1;
	bool8 gSpeciesHasEvaporate : 1;
	bool8 gSpeciesHasSlipperyTail : 1;
};

extern const struct SpecialReplaceAbilityFlags gSpecialReplaceAbilityFlags[];
