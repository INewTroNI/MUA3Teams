#include "main.hpp"

int evaluator(int str, int dur, int mas, int res, int vit, int ene)
{
	return str + dur + mas + res + vit + ene;
}

int defaultEvaluator(int str, int dur, int mas, int res, int vit, int ene)
{
	return str + dur + mas + res + vit + ene;
}

int main()
{
	const auto characterList{ getCharacterList() };
	
	std::vector<Team> bestTeams;
	Team tempTeam;
	int bestScore{ 0 };
	int input{ 0 };
	int additionalScore{ 0 };
	character special1{ character::none };
	character special2{ character::none };
	character special3{ character::none };
	
	for(const auto& ch1 : characterList)
	{
		for(const auto& ch2 : characterList)
		{
			if(ch1.first < ch2.first)
			{
				for(const auto& ch3 : characterList)
				{
					if((ch1.first < ch3.first) && (ch2.first < ch3.first))
					{
						for(const auto& ch4 : characterList)
						{
							if((ch1.first < ch4.first) && (ch2.first < ch4.first) && (ch3.first < ch4.first))
							{
								if ((ch1.first == special1)
									|| (ch2.first == special1)
									|| (ch3.first == special1)
									|| (ch4.first == special1))
								{
									additionalScore += 1000;
								}
								if ((ch1.first == special2)
									|| (ch2.first == special2)
									|| (ch3.first == special2)
									|| (ch4.first == special2))
								{
									additionalScore += 1000;
								}
								if ((ch1.first == special3)
									|| (ch2.first == special3)
									|| (ch3.first == special3)
									|| (ch4.first == special3))
								{
									additionalScore += 1000;
								}
								
								tempTeam = Team{ ch1.second
								, ch2.second
								, ch3.second
								, ch4.second};
								if(tempTeam.getScore(evaluator) + additionalScore > bestScore)
								{
									bestTeams.clear();
									bestTeams.push_back(tempTeam);
									bestScore = tempTeam.getScore(evaluator) + additionalScore;
								}
								else if(tempTeam.getScore(evaluator) + additionalScore == bestScore)
								{
									bestTeams.push_back(tempTeam);
								}
								
								additionalScore = 0;
							}
							
						}
					}
					
				}
			}
			
		}
		
	}
	
	for(const auto& x : bestTeams)
	{
		std::cout << "Score: " << x.getScore(defaultEvaluator);
		std::cout << x << "\n";
	}
	
	return 0;
}