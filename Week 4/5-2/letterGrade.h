class letterGrade
{
private:
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60,
              MIN_POSSIBLE_SCORE = 0;

    int numStudents,
        student,
        testScore;
    char grade;

public:
    void computeLetterGrade();
    void bye();
};