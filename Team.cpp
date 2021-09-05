#include "Team.hpp"

const auto teamBonuses{ getTeamBonuses() };

bool Team::addCharacter(const Character& ch)
{
	if (m_ch1.getID() != character::none)
	{
		if (m_ch2.getID() != character::none)
		{
			if (m_ch3.getID() != character::none)
			{
				if (m_ch4.getID() != character::none)
				{
					return false;
				}
				else
				{
					m_ch4 = ch;
					calculate();
					return true;
				}
			}
			else
			{
				m_ch3 = ch;
				return true;
			}
		}
		else
		{
			m_ch2 = ch;
			return true;
		}
	}
	else
	{
		m_ch1 = ch;
		return true;
	}
	
	return false;
}

void Team::takeCharacterTeams(const Character& ch)
{
	/*
		find before [] is there 'cause I couldn't find any info if [] guarantees initialization of int to 0
	*/
	for(const auto& x : ch.getBonusTeams())
	{
		auto search = m_teams.find(x);
		if (search != m_teams.end())
		{
			search->second++;
		}
		else
		{
			m_teams[x] = 1;
		}
	}
}

void Team::calculate()
{
	takeCharacterTeams(m_ch1);
	takeCharacterTeams(m_ch2);
	takeCharacterTeams(m_ch3);
	takeCharacterTeams(m_ch4);
	
	for(const auto& x : m_teams)
	{	
		switch(teamBonuses.at(x.first).getType())
		{
			case bonusType::str:
			{
				m_strBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			case bonusType::dur:
			{
				m_durBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			case bonusType::mas:
			{
				m_masBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			case bonusType::res:
			{
				m_resBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			case bonusType::vit:
			{
				m_vitBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			case bonusType::ene:
			{
				m_eneBonus = teamBonuses.at(x.first).getBonusValue(x.second);
				break;
			}
			default:
			{
				std::cout << "Error Bonus Type during calculations";
				reset();
				return;
			}
		}
		
	}
}

void Team::reset()
{
	m_ch1 = m_ch2 = m_ch3 = m_ch4 = Character{ character::none };
	
	m_strBonus = m_durBonus = m_masBonus = m_resBonus
	= m_vitBonus = m_eneBonus = 0;
	m_teams.clear();
}

std::ostream& operator<<(std::ostream& cout, Team t)
{
	cout << "\nCharacters:\n " << m_ch1.getID()
	<< ", " << m_ch2.getID()
	<< ", " << m_ch3.getID()
	<< ", " << m_ch4.getID() << "\n";
	
	cout << "Active teams bonuses:\n "
	<< 
	
	return cout;
}

