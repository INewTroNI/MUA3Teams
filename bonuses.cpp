#include "bonuses.hpp"

std::ostream& operator<<(std::ostream& cout, bonusTeam t)
{
	using bt = bonusTeam;
	
	switch(t)
	{
		case bt::NewAvengers:
		{
			cout << "New Avengers";
			break;
		}
		case bt::GuardiansOfTheGalaxy:
		{
			cout << "Guardians Of The Galaxy";
			break;
		}
		case bt::FemmeFatalis:
		{
			cout << "Femme Fatalis";
			break;
		}
		case bt::AgentsOfSHIELD:
		{
			cout << "Agents Of S.H.I.E.L.D.";
			break;
		}
		case bt::X_Men:
		{
			cout << "X-Men";
			break;
		}
		case bt::Villians:
		{
			cout << "Villians";
			break;
		}
		case bt::Defenders:
		{
			cout << "Defenders";
			break;
		}
		case bt::Anti_Heroes:
		{
			cout << "Anti-Heroes";
			break;
		}
		case bt::OriginalAvengers:
		{
			cout << "Original Avengers";
			break;
		}
		case bt::MidnightSons:
		{
			cout << "Midnight Sons";
			break;
		}
		case bt::WebWarriors:
		{
			cout << "Web Warriors";
			break;
		}
		case bt::TheCrew:
		{
			cout << "The Crew";
			break;
		}
		case bt::MarvelRoyalty:
		{
			cout << "Marvel Royalty";
			break;
		}
		case bt::GodsAndDeamons:
		{
			cout << "Gods&Deamons";
			break;
		}
		case bt::Generations:
		{
			cout << "Generations";
			break;
		}
		case bt::HeavyHitters:
		{
			cout << "Heavy Hitters";
			break;
		}
		case bt::AgileFighters:
		{
			cout << "Agile Fighters";
			break;
		}
		case bt::UltimateAlliance3:
		{
			cout << "Ultimate Alliance 3";
			break;
		}
		case bt::Avengers:
		{
			cout << "Avengers";
			break;
		}
		case bt::X_Force:
		{
			cout << "X-Force";
			break;
		}
		case bt::WomenOfMarvel:
		{
			cout << "Women Of Marvel";
			break;
		}
		case bt::FamilyValues:
		{
			cout << "Family Values";
			break;
		}
		case bt::Partners:
		{
			cout << "Partners";
			break;
		}
		case bt::BackInBlack:
		{
			cout << "Back In Black";
			break;
		}
		case bt::MartialArtists:
		{
			cout << "Martial Artists";
			break;
		}
		case bt::ForcesOfNature:
		{
			cout << "Forces Of Nature";
			break;
		}
		case bt::CuttingEdge:
		{
			cout << "Cutting Edge";
			break;
		}
		case bt::BigBrains:
		{
			cout << "Big Brains";
			break;
		}
		case bt::WisecrackingWarriors:
		{
			cout << "Wisecracking Warriors";
			break;
		}
		case bt::TeamLeaders:
		{
			cout << "Team Leaders";
			break;
		}
		case bt::All_NewX_Men:
		{
			cout << "All-New X-Men";
			break;
		}
		case bt::SharpShooters:
		{
			cout << "Sharp Shooters";
			break;
		}
		case bt::HeavyMetal:
		{
			cout << "Heavy Metal";
			break;
		}
		case bt::MarvelKnights:
		{
			cout << "Marvel Knights";
			break;
		}
		case bt::FirstClassX_Men:
		{
			cout << "First Class X-Men";
			break;
		}
		case bt::FantasticFour:
		{
			cout << "Fantastic Four";
			break;
		}
		case bt::FantasticFourReserveMembers:
		{
			cout << "Fantastic Four Reserve Members";
			break;
		}
		case bt::SmoothOperators:
		{
			cout << "Smooth Operators";
			break;
		}
		default:
		{
			cout << "Error Bonus Team";
			break;
		}
	}
	
	return cout;
}

std::ostream& operator<<(std::ostream& cout, bonusType t)
{
	using b_t = bonusType;
	
	switch(t)
	{
		case b_t::str:
		{
			cout << "STR";
			break;
		}
		case b_t::dur:
		{
			cout << "DUR";
			break;
		}
		case b_t::mas:
		{
			cout << "MAS";
			break;
		}
		case b_t::res:
		{
			cout << "RES";
			break;
		}
		case b_t::vit:
		{
			cout << "VIT";
			break;
		}
		case b_t::ene:
		{
			cout << "ENE";
			break;
		}
		default:
		{
			cout << "Error Bonus Type";
			break;
		}
	}
	
	return cout;
}

std::map<bonusTeam, TeamBonus> getTeamBonuses()
{
	std::map<bonusTeam, TeamBonus> bnsList;
	
	using bt = bonusTeam;
	using bp = bonusPower;
	using b_t = bonusType;
	
	bnsList[bt::NewAvengers] = TeamBonus{ bt::NewAvengers, bp::bonus2_4_7, b_t::dur };
	
	bnsList[bt::GuardiansOfTheGalaxy] 
	= TeamBonus{ bt::GuardiansOfTheGalaxy, bp::bonus2_4_8, b_t::res };
	
	bnsList[bt::FemmeFatalis] 
	= TeamBonus{ bt::FemmeFatalis, bp::bonus2_4_8, b_t::mas };
	
	bnsList[bt::AgentsOfSHIELD] 
	= TeamBonus{ bt::AgentsOfSHIELD, bp::bonus2_4_7, b_t::vit };
	
	bnsList[bt::X_Men] 
	= TeamBonus{ bt::X_Men, bp::bonus2_4_7, b_t::str };
	
	bnsList[bt::Villians] 
	= TeamBonus{ bt::Villians, bp::bonus2_4_8, b_t::vit };
	
	bnsList[bt::Defenders] 
	= TeamBonus{ bt::Defenders, bp::bonus2_4_7, b_t::dur };
	
	bnsList[bt::Anti_Heroes] 
	= TeamBonus{ bt::Anti_Heroes, bp::bonus2_4_6, b_t::str };
	
	bnsList[bt::OriginalAvengers] 
	= TeamBonus{ bt::OriginalAvengers, bp::bonus3_6_10, b_t::mas };
	
	bnsList[bt::MidnightSons] 
	= TeamBonus{ bt::MidnightSons, bp::bonus3_6_10, b_t::mas };
	
	bnsList[bt::WebWarriors] 
	= TeamBonus{ bt::WebWarriors, bp::bonus2_4_8, b_t::res };
	
	bnsList[bt::TheCrew] 
	= TeamBonus{ bt::TheCrew, bp::bonus3_6_10, b_t::res };
	
	bnsList[bt::MarvelRoyalty] 
	= TeamBonus{ bt::MarvelRoyalty, bp::bonus2_4_6, b_t::ene };
	
	bnsList[bt::GodsAndDeamons] 
	= TeamBonus{ bt::GodsAndDeamons, bp::bonus2_4_8, b_t::vit };
	
	bnsList[bt::Generations] 
	= TeamBonus{ bt::Generations, bp::bonus2_4_7, b_t::dur };
	
	bnsList[bt::HeavyHitters] 
	= TeamBonus{ bt::HeavyHitters, bp::bonus2_4_7, b_t::str };
	
	bnsList[bt::AgileFighters] 
	= TeamBonus{ bt::AgileFighters, bp::bonus1_2_4, b_t::mas };
	
	bnsList[bt::UltimateAlliance3] 
	= TeamBonus{ bt::UltimateAlliance3, bp::bonus1_2_4, b_t::vit };
	
	bnsList[bt::Avengers] 
	= TeamBonus{ bt::Avengers, bp::bonus1_2_4, b_t::ene };
	
	bnsList[bt::X_Force] 
	= TeamBonus{ bt::X_Force, bp::bonus2_4_8, b_t::vit };
	
	bnsList[bt::WomenOfMarvel] 
	= TeamBonus{ bt::WomenOfMarvel, bp::bonus1_2_4, b_t::ene };
	
	bnsList[bt::FamilyValues] 
	= TeamBonus{ bt::FamilyValues, bp::bonus3_6_10, b_t::dur };
	
	bnsList[bt::Partners] 
	= TeamBonus{ bt::Partners, bp::bonus2_4_7, b_t::ene };
	
	bnsList[bt::BackInBlack] 
	= TeamBonus{ bt::BackInBlack, bp::bonus3_6_10, b_t::res };
	
	bnsList[bt::MartialArtists] 
	= TeamBonus{ bt::MartialArtists, bp::bonus2_4_7, b_t::str };
	
	bnsList[bt::ForcesOfNature] 
	= TeamBonus{ bt::ForcesOfNature, bp::bonus3_6_10, b_t::mas };
	
	bnsList[bt::CuttingEdge] 
	= TeamBonus{ bt::CuttingEdge, bp::bonus2_4_6, b_t::str };
	
	bnsList[bt::BigBrains] 
	= TeamBonus{ bt::BigBrains, bp::bonus2_4_7, b_t::res };
	
	bnsList[bt::WisecrackingWarriors] 
	= TeamBonus{ bt::WisecrackingWarriors, bp::bonus2_4_8, b_t::ene };
	
	bnsList[bt::TeamLeaders] 
	= TeamBonus{ bt::TeamLeaders, bp::bonus2_4_6, b_t::ene };
	
	bnsList[bt::All_NewX_Men] 
	= TeamBonus{ bt::All_NewX_Men, bp::bonus2_4_8, b_t::str };
	
	bnsList[bt::SharpShooters] 
	= TeamBonus{ bt::SharpShooters, bp::bonus2_4_8, b_t::mas };
	
	bnsList[bt::HeavyMetal] 
	= TeamBonus{ bt::HeavyMetal, bp::bonus2_4_8, b_t::dur };
	
	bnsList[bt::MarvelKnights] 
	= TeamBonus{ bt::MarvelKnights, bp::bonus2_4_7, b_t::mas };
	
	bnsList[bt::FirstClassX_Men] 
	= TeamBonus{ bt::FirstClassX_Men, bp::bonus3_6_10, b_t::res };
	
	bnsList[bt::FantasticFour] 
	= TeamBonus{ bt::FantasticFour, bp::bonus3_6_10, b_t::dur };
	
	bnsList[bt::FantasticFourReserveMembers] 
	= TeamBonus{ bt::FantasticFourReserveMembers, bp::bonus2_4_7, b_t::str };
	
	bnsList[bt::SmoothOperators] 
	= TeamBonus{ bt::SmoothOperators, bp::bonus3_6_10, b_t::vit };
	
	return bnsList;
}

int getBonusValue(bonusPower pwr, int membersN)
{
	if (membersN < 2)
	{
		return 0;
	}
	if (membersN > 4)
	{
		return 99999;
	}
	
	using bp = bonusPower;
	
	switch (pwr)
	{
		case bp::bonus1_2_4:
		{
			switch (membersN)
			{
				case 2: return 1;
				case 3: return 2;
				case 4: return 4;
			}
			break;
		}
		case bp::bonus2_4_6:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 6;
			}
			break;
		}
		case bp::bonus2_4_7:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 7;
			}
			break;
		}
		case bp::bonus2_4_8:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 8;
			}
			break;
		}
		case bp::bonus3_6_10:
		{
			switch (membersN)
			{
				case 2: return 3;
				case 3: return 6;
				case 4: return 10;
			}
			break;
		}
		default:
		{
			return 99999;
		}
	}
	return 99999;
}

