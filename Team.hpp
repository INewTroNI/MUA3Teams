#ifndef MUA3_TEAM_HPP
#define MUA3_TEAM_HPP

#include <functional>
#include <iostream>
#include <map>

#include "bonuses.hpp"
#include "Character.hpp"

class Team
{
private:
	std::map<bonusTeam, int> m_teams;
	int m_strBonus{ 0 };
	int m_durBonus{ 0 };
	int m_masBonus{ 0 };
	int m_resBonus{ 0 };
	int m_vitBonus{ 0 };
	int m_eneBonus{ 0 };
	Character m_ch1{ character::none };
	Character m_ch2{ character::none };
	Character m_ch3{ character::none };
	Character m_ch4{ character::none };
	
	void takeCharacterTeams(const Character& ch);
	void calculate();
	
public:
	Team(const Character& ch1 = Character{ character::none }
	, const Character& ch2 = Character{ character::none }
	, const Character& ch3 = Character{ character::none }
	, const Character& ch4 = Character{ character::none })
		: m_ch1{ ch1 }, m_ch2{ ch2 }, m_ch3{ ch3 }, m_ch4{ ch4 }
	{
		if (m_ch4.getID() != character::none)
		{
			calculate();
		}
	}
	
	bool addCharacter(const Character& ch);
	
	int getStr() const { return m_strBonus; };
	int getDur() const { return m_durBonus; };
	int getMas() const { return m_masBonus; };
	int getRes() const { return m_resBonus; };
	int getVit() const { return m_vitBonus; };
	int getEne() const { return m_eneBonus; };
	
	int getScore(const std::function<int(int, int, int, int, int, int)> evaluate) const
	{
		return evaluate(m_strBonus, m_durBonus, m_masBonus
		, m_resBonus, m_vitBonus, m_eneBonus);
	}
	
	void reset();
	
	friend std::ostream& operator<<(std::ostream& cout, Team t);
};

#endif