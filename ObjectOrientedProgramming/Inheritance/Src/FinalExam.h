#pragma once

#include "GradedActivity.h"


class FinalExam : public GradedActivity
{
private:
	int m_numQuestions;
	double m_pointsEach;
	int m_numMissed;

public:
	FinalExam()
	{
		m_numQuestions = 0;
		m_pointsEach = 0.0;
		m_numMissed = 0;
	}

	FinalExam(int questions, int missed)
	{
		set(questions, missed);
	}

	void set(int questions, int missed);

	double getNumQuestions() const
	{
		return m_numQuestions;
	}

	double getPointsEach() const
	{
		return m_pointsEach;
	}

	int getNumMissed() const
	{
		return m_numMissed;
	}
};
