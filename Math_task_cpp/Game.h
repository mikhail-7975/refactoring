#pragma once
#include <vector>
#include <string>
#include "Task.h"
#include "Operations.h"
#include <time.h>

REGISTER_OPERATION(PlusOperation);
REGISTER_OPERATION(MinusOperation);
REGISTER_OPERATION(MultOperation);
REGISTER_OPERATION(DivOperation);

class GameTimer;

class Game final {
public:
	Game(int _minNumber, int _maxNumber);
	void generateNewTask();
	bool acceptUserAnswer(int userAnswer);
	std::string showTask();
	std::string stopAndShowResults();
	void restart();

	const size_t correctAnswerCount() { return _correctAnswerCount; };
	const size_t AnswerCount() { return _AnswerCount; };
	
private:
	time_t beginTime, endTime;
	size_t _correctAnswerCount;
	size_t _AnswerCount;
	Task task;
	int minNumber, maxNumber;
	std::vector<std::string> operationSymbols{ "+", "-", "*", "/" };
};
/*
class GameTimer final {
	time_t begin_time;
	time_t end_time;
	GameTimer() = default;
public:
	static std::unique_ptr<GameTimer> _gameTimer;
	static const std::unique_ptr<GameTimer>& initTimer() {
		//if (!_gameTimer) {
			_gameTimer.reset(new GameTimer());
		//}
		return _gameTimer;
	};
	void startTimer() { time(&begin_time); };
	void stopTimer() { time(&end_time); };
	void resetTimer() { begin_time = 0; end_time = 0; };
	time_t gameTime() { return end_time - begin_time; };
};
*/

