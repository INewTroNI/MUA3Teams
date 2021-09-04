#ifndef MUA3_TEAM_HPP
#define MUA3_TEAM_HPP

class Team
{
private:
	std::map<bonusTeam, int> m_teams;
	int m_strBonus{};
	int m_durBonus{};
	int m_masBonus{};
	int m_resBonus{};
	int m_vitBonus{};
	int m_eneBonus{};
	character m_ch1{ character::none };
	character m_ch2{ character::none };
	character m_ch3{ character::none };
	character m_ch4{ character::none };
	
public:
	Team(character ch1 = character::none
	, character ch2 = character::none
	, character ch3 = character::none
	, character ch4 = character::none)
		: m_ch1{ ch1 }, m_ch2{ ch2 }, m_ch3{ ch3 }, m_ch4{ ch4 }
	{ }
	
};

#endif