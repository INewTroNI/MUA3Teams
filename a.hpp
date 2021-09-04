#include <cstdint>
#include <iostream>
#include <vector>

//
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

enum class character : std::uint_fast8_t
{
	none,
	BlackPanther,
	BlackWidow,
	Blade,
	Cable,
	Colossus,
	CptAmerica,
	CptMarvel,
	Crystal,
	Cyclops,
	Daredevil,
	Deadpool,
	DrDoom,
	DrStrange,
	Drax,
	Elektra,
	ElsaBloodstone,
	Falcon,
	Gambit,
	Gamora,
	GhostRider,
	Hawkeye,
	Hulk,
	HumanTorch,
	Iceman,
	InvisibleWoman,
	IronFist,
	IronMan,
	Loki,
	LukeCage,
	Magneto,
	MilesMorales,
	MoonKnight,
	Morbius,
	MrFantastic,
	MsMarvel,
	Nightcrawler,
	Phoenix,
	Psylocke,
	Punisher,
	RocketAndGroot,
	ScarletWitch,
	Spider_Gwen,
	Spider_Man,
	Star_Lord,
	Storm,
	Thanos,
	TheThing,
	Thor,
	Venom,
	Wasp,
	Wolverine
};

class TeamBonus
{
private:
	bonusTeam m_id{ bonusTeam::none };
	bonusPower m_power{ bonusPower::none };
	bonusType m_type{ bonusType::none };
	
public:
	TeamBonus(bonusTeam id, bonusPower power, bonusType type) 
		: m_id{ id }, m_power{ power }, m_type{ type }
	{ }
	bonusTeam getID() const { return m_id; }
	bonusPower getPower() const { return m_power; }
	bonusType getType() const { return m_type; }
	
	// operators for comparison
};

class Character
{
private:
	character m_id{ character::none };
	std::vector<bonusTeam> m_bonus_teams;
	
public:
	Character(character id = character::none) 
		: m_id{ id }
	{ }
	
	character getID() const { return m_id; }
	
	const auto& getBonusTeams() const { return m_bonus_teams; }
	
	bool isOnTeam(bonusTeam t) const;
	
	Character& setID(const character id)
	{
		m_id = id;
		return *this;
	}
	
	Character& addToBonusTeam(const bonusTeam id)
	{
		m_bonus_teams.push_back(id);
		return *this;
	}
	
	Character& resetBonusTeams()
	{
		m_bonus_teams.clear();
		return *this;
	}
	
	void print() const;
	
	friend Character& operator>>(Character& ch, const bonusTeam t)
	{
		ch.addToBonusTeam(t);
		return ch;
	}
	// operators for comparison?
};

class Team
{
	
};