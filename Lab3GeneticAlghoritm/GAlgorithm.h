#pragma once

#include "Config.h"
#include <vector>
#include <string>

#define PAIRS_NUMBER_A_DAY 6;
#define WORK_DAYS_NUMBER 5;

class GAlgorithm {
public:
	enum class MutationType {
		ChangeDay,
		ChangePair,
		ChangeClassrom,
		ChangeCourse,
		ChangeProfessor,
		ChangeLecturePractice,
		ChangeGroup,
		AddPair,
		RemovePair,
	};

public:
	GAlgorithm(Config& config);

	void Init();

	void Cross();

	void Mutate();

private:
	Config& _config;
	std::vector<std::string> _population;

	string GeneratePair();
};