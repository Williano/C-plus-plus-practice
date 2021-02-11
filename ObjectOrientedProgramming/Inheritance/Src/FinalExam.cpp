#include "FinalExam.h"

void FinalExam::set(int questions, int missed)
{
	double numericScore;

	m_numQuestions = questions;
	m_numMissed = missed;

	m_pointsEach = 100.0 / m_numQuestions;

	numericScore = 100.0 - (missed * m_pointsEach);

	setScore(numericScore);
}
