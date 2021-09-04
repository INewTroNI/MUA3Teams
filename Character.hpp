#ifndef MUA3_CHARACTER_HPP
#define MUA3_CHARACTER_HPP

#include <cstdint>
#include <iostream>
#include <map>

#include "bonuses.hpp"

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

std::ostream& operator<<(std::ostream& cout, character c);


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
	friend std::ostream& operator<<(std::ostream& cout, Character c)
	{
		c.print();
		return cout;
	}
	// operators for comparison?
};

// generates list of all MUA3 characters (except last one, don't have them)
std::map<character, Character> getCharacterList();

#endif