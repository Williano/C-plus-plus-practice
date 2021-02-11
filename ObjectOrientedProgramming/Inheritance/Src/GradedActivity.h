#pragma once



class GradedActivity
{
private:
	double m_score;

public:
	GradedActivity()
	{
		m_score = 0.0;
	}

	GradedActivity(double score) : m_score(score) {}

	void setScore(double score)
	{
		m_score = score;
	}

	double getScore() const
	{
		return m_score;
	}

	char getLetterGrade() const;
};
