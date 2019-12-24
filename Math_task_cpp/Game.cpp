#include "Game.h"
#include <iostream>

//std::unique_ptr<GameTimer> GameTimer::_gameTimer = 0;

Game::Game(int _minNumber, int _maxNumber) {
	minNumber = _minNumber;
	maxNumber = _maxNumber;
	_AnswerCount = 0;
	_correctAnswerCount = 0;
	beginTime = 0;
	endTime = 0;
	/*timer.reset(GameTimer::initTimer().get());
	timer->resetTimer();
	timer->startTimer();*/
}

void stop(bool& flag) {
	flag = 1;
}

void Game::generateNewTask()
{
	int firstNumber = minNumber + std::rand() % maxNumber;
	int secondNumber = minNumber + std::rand() % maxNumber;
	int operationIndex = 0 + std::rand() % operationSymbols.size();
	Task T(firstNumber, secondNumber, operationSymbols[operationIndex]);
	task = T;
}

bool Game::acceptUserAnswer(int userAnswer) {	
	if (task.result == userAnswer) {
		_correctAnswerCount++;
		_AnswerCount++;
		return 1;
	} else {
		_AnswerCount++;
		return 0;
	}
}

std::string Game::showTask()
{
	return task.show();
}
std::string Game::stopAndShowResults()
{
	time(&endTime);
	std::string output = std::to_string( ( -beginTime + endTime) / _correctAnswerCount) + " sec for 1 task";
	return output;
}
void Game::restart()
{
	beginTime = 0;
	endTime = 0;
	time(&beginTime);
	_correctAnswerCount = 0;
	_AnswerCount = 0;
}
/*
void Game::play()
{
		std::string answer;
		while (answer == "")
			std::getline(std::cin, answer);
		while (std::stoi(answer) != T.result) {
			_AnswerCount++;
			std::cout << "What?" << std::endl;
			std::getline(std::cin, answer);
		}
		_correctAnswerCount++;
		std::cout << "Right!" << std::endl;
}*/
