#ifndef MUA3_BONUSES_HPP
#define MUA3_BONUSES_HPP

#include <cstdint>
#include <iostream>
#include <map>

enum class bonusTeam : std::uint_fast8_t
{
	none,
	NewAvengers,
	GuardiansOfTheGalaxy,
	FemmeFatalis,
	AgentsOfSHIELD,
	X_Men,
	Villians,
	Defenders,
	Anti_Heroes,
	OriginalAvengers,
	MidnightSons,
	WebWarriors,
	TheCrew,
	MarvelRoyalty,
	GodsAndDeamons,
	Generations,
	HeavyHitters,
	AgileFighters,
	UltimateAlliance3,
	Avengers,
	X_Force,
	WomenOfMarvel,
	FamilyValues,
	Partners,
	BackInBlack,
	MartialArtists,
	ForcesOfNature,
	CuttingEdge,
	BigBrains,
	WisecrackingWarriors,
	TeamLeaders,
	All_NewX_Men,
	SharpShooters,
	HeavyMetal,
	MarvelKnights,
	FirstClassX_Men,
	FantasticFour,
	FantasticFourReserveMembers,
	SmoothOperators
};

std::ostream& operator<<(std::ostream& cout, bonusTeam t);


enum class bonusPower : std::uint_fast8_t
{
	none,
	bonus1_2_4,
	bonus2_4_6,
	bonus2_4_7,
	bonus2_4_8,
	bonus3_6_10,
};


enum class bonusType : std::uint_fast8_t
{
	none,
	str,
	dur,
	mas,
	res,
	vit,
	ene
};

std::ostream& operator<<(std::ostream& cout, bonusType t);


class TeamBonus
{
private:
	bonusTeam m_id{ bonusTeam::none };
	bonusPower m_power{ bonusPower::none };
	bonusType m_type{ bonusType::none };
	
public:
	TeamBonus(const bonusTeam id = bonusTeam::none
	, const bonusPower power = bonusPower::none
	, const bonusType type = bonusType::none)
		: m_id{ id }, m_power{ power }, m_type{ type }
	{ }
	bonusTeam getID() const { return m_id; }
	bonusPower getPower() const { return m_power; }
	bonusType getType() const { return m_type; }
	int getBonusValue(const int membersN) const;
};

// generates list 
std::map<bonusTeam, TeamBonus> getTeamBonuses();

#endif
